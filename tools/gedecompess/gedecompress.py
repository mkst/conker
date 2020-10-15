
#define TABLE1 0
#define TABLE2 1
#define VARIABLETABLE 2
#define WORDTABLEBEGIN 3
#define WORDTABLEEND 4

# constants
bt12Table1S = [
    0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 0x0008, 0x0009, 0x000a,
    0x000b, 0x000d, 0x000f, 0x0011, 0x0013, 0x0017, 0x001b, 0x001f,
    0x0023, 0x002b, 0x0033, 0x003b, 0x0043, 0x0053, 0x0063, 0x0073,
    0x0083, 0x00a3, 0x00c3, 0x00e3, 0x0102, 0x0000, 0x0000, 0x0000
]

bt12Table1B = [
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02,
    0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04,
    0x05, 0x05, 0x05, 0x05, 0x00, 0x63, 0x63, 0x00
]

bt12Table2S = [
    0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0007, 0x0009, 0x000d,
    0x0011, 0x0019, 0x0021, 0x0031, 0x0041, 0x0061, 0x0081, 0x00c1,
    0x0101, 0x0181, 0x0201, 0x0301, 0x0401, 0x0601, 0x0801, 0x0c01,
    0x1001, 0x1801, 0x2001, 0x3001, 0x4001, 0x6001, 0x0000, 0x0000
]

bt12Table2B = [
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02,
    0x03, 0x03, 0x04, 0x04, 0x05, 0x05, 0x06, 0x06,
    0x07, 0x07, 0x08, 0x08, 0x09, 0x09, 0x0a, 0x0a,
    0x0b, 0x0b, 0x0c, 0x0c, 0x0d, 0x0d, 0x00, 0x00
]

bt2Table1B = [
    0x10, 0x11, 0x12, 0x00, 0x08, 0x07, 0x09, 0x06,
    0x0a, 0x05, 0x0b, 0x04, 0x0c, 0x03, 0x0d, 0x02,
    0x0e, 0x01, 0x0f
    ]

bt1Table1 = 288 * [8]
bt1Table2 = 30 * [5]


class GeDecompressor:

    def __init__(self):
        self.MAX_BYTE_SIZE = 0x800000     # 8MB
        self.MAX_ITERATIONS = 256 * 1024  # was: 268435455
        self.INDEX_OFFSET = 4             # first 4 bytes are (decompressed) length
        self.reset()


    def reset(self):
        self.bitsRemain = 0
        self.bitsCache = 0
        self.unpackTableIndex = 0
        self.iterations = 0
        self.fileSize = 0
        self.bytesIndex = self.INDEX_OFFSET
        self.tableSize = 0
        self.fiveBits = 0
        self.variableTable = 19 * [0]
        self.wordTable = 65535 * [0]
        self.wordTableIndex = 0

        self.unpackTable = []
        for i in range(65535):
            self.unpackTable.append({
                "bits": 0,
                "flags": 0,
                "nextIndex": 0,
                "wordValue": 0
            })


    def get_n_bits(self, bits, preserve_state):
        while self.bitsRemain < bits:
            if self.bytesIndex >= self.MAX_BYTE_SIZE:
                return 0
            if self.bytesIndex >= len(self.compressedBuffer):
                return 0
            self.bitsCache |= int(self.compressedBuffer[self.bytesIndex]) << self.bitsRemain
            self.bitsRemain += 8
            self.bytesIndex += 1

        res = self.bitsCache & ((1 << bits) - 1)
        if not preserve_state:
            self.bitsCache = self.bitsCache >> bits
            self.bitsRemain -= bits
        return res


    def UncompressType0(self):
        # print("UncompressType0")
        discardBits = self.bitsRemain & 0x7
        self.get_n_bits(discardBits)
        copyLen = self.get_n_bits(16)
        self.get_n_bits(16, False)

        res = []
        for i in range(copyLen):
            if self.fileSize >= self.MAX_BYTE_SIZE:
                return None
            res.append(self.get_n_bits(8), False)
            self.fileSize += 1
            if self.iterations > self.MAX_ITERATIONS:
                return None
            self.iterations += 1
            if len(res) > 0x2000: # 8192 bytes
                # print("gone too far!")
                return None
        return res


    def UncompressType1(self):
        # print("UncompressType1")
        numBits1, startIndex1 = self.CreateGlobalDecompressionTable(0, 257, 0, 0, 7)
        numBits2, startIndex2 = self.CreateGlobalDecompressionTable(1, 0, 1, 1, 5)
        return self.DecompressBasedOnTable(startIndex1, startIndex2, numBits1, numBits2)


    def UncompressType2(self):
        # print("UncompressType2")
        for i in range(19):
            self.variableTable[i] = 0

        self.tableSize = self.get_n_bits(5, False) + 257
        self.fiveBits = self.get_n_bits(5, False) + 1
        fourBits = self.get_n_bits(4, False) + 4

        for i in range(fourBits):
            threeBits = self.get_n_bits(3, False)
            self.variableTable[bt2Table1B[i]] = threeBits

        numBits1, startIndex1 = self.CreateGlobalDecompressionTable(2, 19, 2, 2, 7)

        lastWritten = 0

        while self.wordTableIndex < (self.tableSize + self.fiveBits):
            if self.iterations > self.MAX_ITERATIONS:
                print("too many iterations")
                return None
            self.iterations += 1

            tableIndex = self.get_n_bits(numBits1, True)
            if (startIndex1 + tableIndex) > 65535:
                return None

            numBits2 = self.unpackTable[startIndex1 + tableIndex]['bits']

            if (self.bytesIndex >= self.MAX_BYTE_SIZE):
                return None

            self.get_n_bits(numBits2, False)
            wordValue = self.unpackTable[startIndex1 + tableIndex]['wordValue']

            if self.unpackTable[startIndex1 + tableIndex]['nextIndex'] == 0:
                if wordValue < 16:
                    lastWritten = wordValue
                    self.wordTable[self.wordTableIndex] = wordValue
                    self.wordTableIndex += 1
                elif wordValue == 16:
                    repeatLen = self.get_n_bits(2, False) + 3
                    for i in range(repeatLen):
                        self.wordTable[self.wordTableIndex] = lastWritten
                        self.wordTableIndex += 1
                elif wordValue == 17:
                    repeatLen = self.get_n_bits(3, False) + 3
                    for i in range(repeatLen):
                        self.wordTable[self.wordTableIndex] = 0
                        self.wordTableIndex += 1
                else:
                    repeatLen = self.get_n_bits(7, False) + 11
                    for i in range(repeatLen):
                        self.wordTable[self.wordTableIndex] = 0
                        self.wordTableIndex += 1

        numBits2, startIndex2 = self.CreateGlobalDecompressionTable(3, 257, 0, 0, 9);
        numBits3, startIndex3 = self.CreateGlobalDecompressionTable(4, 0, 1, 1, 6);

        return self.DecompressBasedOnTable(startIndex2, startIndex3, numBits2, numBits3);


    def CreateGlobalDecompressionTable(self, bit1TableChoice, size2, bit12STableSChoice, bit12BTableChoice, numBits):

        localTableEntry = {
            "bits": 0,
            "flags": 0,
            "nextIndex": 0,
            "wordValue": 0
        }

        table1Size = 0
        returnIndex = -1

        seventeenints1 = 17 * [0]

        if bit1TableChoice == 0:                # TABLE1
            table1Size = 288
            for x in range(table1Size):
                seventeenints1[bt1Table1[x]] += 1
        elif bit1TableChoice == 1:              # TABLE2
            table1Size = 30
            for x in range(table1Size):
                seventeenints1[bt1Table2[x]] += 1
        elif bit1TableChoice == 2:              # VARIABLETABLE
            table1Size = 19
            for x in range(table1Size):
                seventeenints1[self.variableTable[x]] += 1
        elif bit1TableChoice == 3:              # WORDTABLEBEGIN
            table1Size = self.tableSize # (get_n_bits(5)+257, False)
            for x in range(table1Size):
                seventeenints1[self.wordTable[x]] += 1
        elif bit1TableChoice == 4:              # WORDTABLEEND
            table1Size = (self.tableSize + self.fiveBits) - self.tableSize
            for x in range(table1Size):
                seventeenints1[self.wordTable[self.tableSize + x]] += 1

        firstBit = 1
        while seventeenints1[firstBit] == 0:
            firstBit += 1

        lastBit = 16
        while seventeenints1[lastBit] == 0:
            lastBit -= 1

        if numBits < firstBit:
            numBits = firstBit
        if numBits > lastBit:
            numBits = lastBit

        v1temp = 1 << firstBit
        if (firstBit != lastBit):
            for i in range(firstBit, lastBit):
                v1temp = (v1temp - seventeenints1[i]) * 2

        oldLastBitCount = seventeenints1[lastBit]
        seventeenints1[lastBit] = v1temp
        v1temp = v1temp - oldLastBitCount

        seventeenints2 = 17 * [0]

        accumulator = 0
        for i in range(1, lastBit):
            accumulator += seventeenints1[i]
            seventeenints2[i+1] = accumulator

        moreWords = table1Size * [0]
        moreWordsIndex = 0
        index = 0

        for x in range(table1Size):
            if bit1TableChoice == 0:                # TABLE1
                if bt1Table1[x] != 0:
                    moreWords[seventeenints2[bt1Table1[x]]] = index
                    seventeenints2[bt1Table1[x]] += 1
            elif bit1TableChoice == 1:              # TABLE2
                if bt1Table2[x] != 0:
                    moreWords[seventeenints2[bt1Table2[x]]] = index
                    seventeenints2[bt1Table2[x]] += 1
            elif bit1TableChoice == 2:              # VARIABLETABLE
                if self.variableTable[x] != 0:
                    moreWords[seventeenints2[self.variableTable[x]]] = index
                    seventeenints2[self.variableTable[x]] += 1
            elif bit1TableChoice == 3:              # WORDTABLEBEGIN
                if self.wordTable[x] != 0:
                    moreWords[seventeenints2[self.wordTable[x]]] = index
                    seventeenints2[self.wordTable[x]] += 1
            elif bit1TableChoice == 4:              # WORDTABLEEND
                if self.wordTable[self.tableSize + x] != 0:
                    moreWords[seventeenints2[self.wordTable[self.tableSize + x]]] = index
                    seventeenints2[self.wordTable[self.tableSize + x]] += 1

            index += 1

        stemp2_v1 = -numBits
        blockNum = -1
        bitPattern = 0

        unpackTableStarts = 0x20000 * [0]
        unpackTableStartsIndex = -1

        temp_a3 = 0
        thisTableStart = 0

        for bitNum in range (firstBit, lastBit + 1):
            iterationsLeft = seventeenints1[bitNum]
            lv34 = 1 << (bitNum-1)
            moreWordsIndex2 = table1Size

            while iterationsLeft > 0:
                stemp2_v1 += numBits
                while stemp2_v1 < bitNum:
                    blockNum += 1
                    temp_t0 = 0
                    if numBits < (lastBit - stemp2_v1):
                        temp_t0 = numBits
                    else:
                        temp_t0 = lastBit - stemp2_v1

                    temp_a3 = bitNum - stemp2_v1

                    if iterationsLeft < (1<<temp_a3):
                        another_var_v1 = (1 << temp_a3) - iterationsLeft
                        temp_a3 += 1

                        index = bitNum + 1
                        while temp_a3 < temp_t0:
                            if seventeenints1[index] < another_var_v1 * 2:
                                temp_a3 += 1
                                another_var_v1 = another_var_v1 * 2 - seventeenints1[index]
                            index += 1

                    if returnIndex == -1:
                        returnIndex = self.unpackTableIndex + 1

                    unpackTableStartsIndex += 1
                    unpackTableStarts[unpackTableStartsIndex] = self.unpackTableIndex + 1

                    thisTableStart = self.unpackTableIndex + 1

                    if blockNum != 0:
                        seventeenints2[blockNum] = bitPattern
                        localTableEntry['bits'] = numBits
                        localTableEntry['flags'] = temp_a3 + 16
                        localTableEntry['nextIndex'] = self.unpackTableIndex + 1
                        localTableEntry['wordValue'] = -1
                        self.unpackTable[(bitPattern>>(stemp2_v1-numBits))+unpackTableStarts[blockNum-1]]['bits'] = localTableEntry['bits']
                        self.unpackTable[(bitPattern>>(stemp2_v1-numBits))+unpackTableStarts[blockNum-1]]['flags'] = localTableEntry['flags']
                        self.unpackTable[(bitPattern>>(stemp2_v1-numBits))+unpackTableStarts[blockNum-1]]['wordValue'] = localTableEntry['wordValue']
                        self.unpackTable[(bitPattern>>(stemp2_v1-numBits))+unpackTableStarts[blockNum-1]]['nextIndex'] = localTableEntry['nextIndex']

                    self.unpackTableIndex +=  (1 << temp_a3) + 1
                    stemp2_v1 += numBits

                stemp2_v1 = stemp2_v1 - numBits

                localTableEntry['bits'] = bitNum - stemp2_v1
                localTableEntry['nextIndex'] = 0
                if moreWordsIndex >= moreWordsIndex2:
                    localTableEntry['flags'] = 99
                else:
                    tempWord = moreWords[moreWordsIndex]
                    if tempWord < size2:
                        if tempWord >= 256:
                            localTableEntry['flags'] = 15
                        else:
                            localTableEntry['flags'] = 16
                        localTableEntry['wordValue'] = tempWord
                    else:
                        if bit12STableSChoice == 0:         # TABLE1
                            localTableEntry['flags'] = bt12Table1B[moreWords[moreWordsIndex]-size2]
                            localTableEntry['wordValue'] = bt12Table1S[moreWords[moreWordsIndex]-size2]
                        elif (bit12STableSChoice == 1):     # TABLE2
                            localTableEntry['flags'] = bt12Table2B[moreWords[moreWordsIndex]-size2]
                            localTableEntry['wordValue'] = bt12Table2S[moreWords[moreWordsIndex]-size2]
                        elif (bit12STableSChoice == 2):     # VARIABLETABLE
                            print("HELP")
                    moreWordsIndex += 1

                nu_accum_a3 = bitPattern >> stemp2_v1
                stride_v0 = 1 << (bitNum - stemp2_v1)

                while (1 << temp_a3) > nu_accum_a3:
                    if (thisTableStart + nu_accum_a3) > 65535:
                        print("ERROR!")
                        return (0, 0)
                    self.unpackTable[thisTableStart+nu_accum_a3]['bits'] = localTableEntry['bits']
                    self.unpackTable[thisTableStart+nu_accum_a3]['flags'] = localTableEntry['flags']
                    self.unpackTable[thisTableStart+nu_accum_a3]['wordValue'] = localTableEntry['wordValue']
                    self.unpackTable[thisTableStart+nu_accum_a3]['nextIndex'] = localTableEntry['nextIndex']
                    nu_accum_a3 += stride_v0

                tempLv = lv34

                while bitPattern & tempLv:
                    bitPattern ^= tempLv
                    tempLv = tempLv >> 1

                bitPattern = bitPattern ^ tempLv

                while (bitPattern & ((1 << stemp2_v1)-1)) != seventeenints2[blockNum]:
                    blockNum -= 1
                    stemp2_v1 = 0

                iterationsLeft -= 1

        return (numBits, returnIndex)


    def DecompressBasedOnTable(self, startIndex1, startIndex2, bitLen1, bitLen2):
        returnBuffer = self.MAX_BYTE_SIZE * [0]
        index = 0

        while True:
            if self.iterations > self.MAX_ITERATIONS:
                return None
            self.iterations += 1
            if self.bytesIndex >= self.MAX_BYTE_SIZE:
                return None

            index = self.get_n_bits(bitLen1, True)
            if startIndex1 + index > 65535:
                return None
            entry = self.unpackTable[startIndex1 + index]
            while entry['flags'] > 16:
                if self.iterations > self.MAX_ITERATIONS:
                    return None
                self.iterations += 1
                if self.bytesIndex >= self.MAX_BYTE_SIZE:
                    return None
                self.get_n_bits(entry['bits'], False) # discard
                index = self.get_n_bits(entry['flags'] - 16, True)
                if entry['nextIndex'] + index > 65535:
                    return None
                entry = self.unpackTable[entry['nextIndex'] + index]

            if self.bytesIndex >= self.MAX_BYTE_SIZE:
                return None

            self.get_n_bits(entry['bits'], False) #// discard

            if (entry['flags'] == 16):
                if self.fileSize >= self.MAX_BYTE_SIZE:
                    return None
                returnBuffer[self.fileSize] = entry['wordValue']
                self.fileSize += 1
            elif (entry['flags'] < 15):
                copyLen = entry['wordValue'] + self.get_n_bits(entry['flags'], False)
                index2 = self.get_n_bits(bitLen2, True)

                if startIndex2 + index2 > 65535:
                    return None

                entry2 = self.unpackTable[startIndex2+index2]
                while (entry2['flags'] > 16):
                    if (self.iterations > self.MAX_ITERATIONS):
                        return None
                    self.iterations += 1
                    if self.bytesIndex >= self.MAX_BYTE_SIZE:
                        return None
                    self.get_n_bits(entry2['bits'], False) #// discard
                    index2 = self.get_n_bits(entry2['flags'] - 16, True)
                    if (entry2['nextIndex']+index2 > 65535):
                        return None
                    entry2 = self.unpackTable[entry2['nextIndex']+index2]

                if self.bytesIndex >= self.MAX_BYTE_SIZE:
                    return None

                self.get_n_bits(entry2['bits'], False) #// discard

                endOffset1 = entry2['wordValue']
                endOffset2 = self.get_n_bits(entry2['flags'], False)
                start = self.fileSize - endOffset1 - endOffset2
                end = start + copyLen
                for x in range(start, end):
                    if (start < 0) or (start > self.MAX_BYTE_SIZE):
                        return None
                    if (end < 0 or end > self.MAX_BYTE_SIZE):
                        return None
                    returnBuffer[self.fileSize] = returnBuffer[x]
                    self.fileSize += 1
            else:
                break

        return returnBuffer[:self.fileSize]

    def Decompress(self, data):
        # reset state
        self.reset()

        self.compressedBuffer = data

        decompressed = []

        done = 0
        while done != 1:
            if (self.iterations > self.MAX_ITERATIONS):
                print("MAX_ITERATIONS")
                return (0, None)
            self.iterations += 1
            done = self.get_n_bits(1, False)
            if self.bytesIndex >= self.MAX_BYTE_SIZE:
                print("self.bytesIndex >= self.MAX_BYTE_SIZE", self.bytesIndex, self.MAX_BYTE_SIZE)
                return (0, None)
            compressionType = self.get_n_bits(2, False)
            if compressionType == 0:
                print("UncompressType0")
                res = self.UncompressType0()
                if res is None:
                    print("UncompressType0 Failed, managed to get %i" % len(decompressed))
                    return (0, decompressed)
                elif len(res) == 0:
                    print("can we remove this?")
                    break
                else:
                    decompressed += res
            elif compressionType == 1:
                res = self.UncompressType1()
                if res is None:
                    print("UncompressType1 failed, managed to get %i" % len(decompressed))
                    return (self.bytesIndex, decompressed)
                else:
                    decompressed += res
            elif compressionType == 2:
                res = self.UncompressType2()
                if res is None:
                    print("UncompressType2 failed, managed to get %i" % len(decompressed))
                    return (self.bytesIndex, decompressed)
                else:
                    decompressed += res
            else:
                print("Unknown compression type")
                return (0, None)

        return (self.bytesIndex, decompressed)
