FROM ubuntu:20.04 as build

ENV DEBIAN_FRONTEND=noninteractive

COPY /packages.txt /

RUN apt-get update && apt-get install -y $(cat /packages.txt)

COPY requirements.txt /

RUN python3 -m pip install -r /requirements.txt --no-cache-dir

COPY .bash_aliases /root/.bash_aliases

RUN mkdir /conker
WORKDIR /conker
