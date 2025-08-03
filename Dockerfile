FROM ubuntu:24.04 AS build

ENV DEBIAN_FRONTEND=noninteractive

COPY /packages.txt /

RUN apt-get update && apt-get install -y $(cat /packages.txt)

COPY requirements.txt /
RUN python3 -m pip install -r /requirements.txt --no-cache-dir --break-system-packages

COPY tools/n64splat/requirements.txt /splat-requirements.txt
RUN python3 -m pip install -r /splat-requirements.txt --no-cache-dir --break-system-packages

COPY .bash_aliases /root/.bash_aliases

RUN mkdir /conker
WORKDIR /conker
