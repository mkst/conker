#include <libaudio.h>
#include "n_libaudio.h"
#include <os_internal.h>
#include <ultraerror.h>

void n_alEvtqNew(ALEventQueue *evtq, N_ALEventListItem *items, s32 itemCount)
{
    s32 i;
    ALLink *item, *to;

    evtq->eventCount     = 0;
    evtq->allocList.next = 0;
    evtq->allocList.prev = 0;
    evtq->freeList.next  = 0;
    evtq->freeList.prev  = 0;

    for (i = 0; i < itemCount; i++) {
        item = &items[i];
        to = &evtq->freeList;
        // effectively alLink, TODO: macro this?
        item->next = to->next;
        item->prev = to;
        if (to->next) {
            to->next->prev = item;
        }
        to->next = item;
    }

}

ALMicroTime n_alEvtqNextEvent(ALEventQueue *evtq, N_ALEvent *event)
{
    N_ALEventListItem *item;
    ALMicroTime delta;
    ALLink *element;
    ALLink *element2;
    ALLink *after;

    item = (N_ALEventListItem *)evtq->allocList.next;
    if (item) {
        element = (ALLink *)item;
        if (element->next) {
            element->next->prev = element->prev;
        }
        if (element->prev) {
            element->prev->next = element->next;
        }
        bcopy(&item->evt, event, 0x10);
        element2 = (ALLink *)item;
        after = &evtq->freeList;
        element2->next = after->next;
        element2->prev = after;
        if (after->next) {
            after->next->prev = element2;
        }
        after->next = element2;
        delta = item->delta;
    } else {
        event->type = -1;
        delta = 0;
    }
    return delta;
}


void n_alEvtqPostEvent(ALEventQueue *evtq, N_ALEvent *event, ALMicroTime delta, s32 flags)
{
    N_ALEventListItem *item;
    N_ALEventListItem *thisItem;
    ALLink *nextItem;
    s32 atEnd;
    OSIntMask savedMask;
    ALLink *unlinkEl;
    ALLink *elA;
    ALLink *afterA;
    ALLink *elB;
    ALLink *afterB;

    atEnd = 0;
    if (flags & 2) {
        savedMask = osSetIntMask(1);
    }
    item = (N_ALEventListItem *)evtq->freeList.next;
    if (item == 0) {
        if (flags & 2) {
            osSetIntMask(savedMask);
        }
        return;
    }
    if (item->node.next == 0 && (flags & 1) == 0) {
        if (flags & 2) {
            osSetIntMask(savedMask);
        }
        return;
    }
    unlinkEl = (ALLink *)item;
    if (unlinkEl->next) {
        unlinkEl->next->prev = unlinkEl->prev;
    }
    if (unlinkEl->prev) {
        unlinkEl->prev->next = unlinkEl->next;
    }
    bcopy(event, &item->evt, 0x10);
    if (delta == 0x7FFFFFFF) {
        atEnd = -1;
    }
    for (nextItem = &evtq->allocList; nextItem; nextItem = nextItem->next) {
        if (nextItem->next == 0) {
            if (atEnd) {
                item->delta = 0;
            } else {
                item->delta = delta;
            }
            elA = (ALLink *)item;
            afterA = nextItem;
            elA->next = afterA->next;
            elA->prev = afterA;
            if (afterA->next) {
                afterA->next->prev = elA;
            }
            afterA->next = elA;
            break;
        } else {
            thisItem = (N_ALEventListItem *)nextItem->next;
            if (delta < thisItem->delta) {
                item->delta = delta;
                thisItem->delta = thisItem->delta - delta;
                elB = (ALLink *)item;
                afterB = nextItem;
                elB->next = afterB->next;
                elB->prev = afterB;
                if (afterB->next) {
                    afterB->next->prev = elB;
                }
                afterB->next = elB;
                break;
            }
            delta = delta - thisItem->delta;
        }
    }
    if (flags & 2) {
        osSetIntMask(savedMask);
    }
}


s32 func_1001C4F0(ALEventQueue *evtq, s16 type)
{
    N_ALEventListItem *item;
    N_ALEventListItem *next;
    N_ALEventListItem *el;
    N_ALEventListItem *nextCopy;
    OSIntMask savedMask;
    s32 firstDelta;
    s32 cumDelta;
    ALLink *unlinkEl;
    ALLink *linkEl;
    ALLink *after;

    firstDelta = 0;
    cumDelta = 0;
    savedMask = osSetIntMask(1);
    item = (N_ALEventListItem *)evtq->allocList.next;
    if (item) {
        do {
            next = (N_ALEventListItem *)item->node.next;
            el = item;
            nextCopy = next;
            cumDelta += el->delta;
            if (el->evt.type == type) {
                if (firstDelta == 0) {
                    firstDelta = cumDelta;
                }
                if (nextCopy) {
                    nextCopy->delta = nextCopy->delta + el->delta;
                }
                unlinkEl = (ALLink *)item;
                if (unlinkEl->next) {
                    unlinkEl->next->prev = unlinkEl->prev;
                }
                if (unlinkEl->prev) {
                    unlinkEl->prev->next = unlinkEl->next;
                }
                linkEl = (ALLink *)item;
                after = &evtq->freeList;
                linkEl->next = after->next;
                linkEl->prev = after;
                if (after->next) {
                    after->next->prev = linkEl;
                }
                after->next = linkEl;
            }
            item = next;
        } while (item);
    }
    osSetIntMask(savedMask);
    return firstDelta;
}

