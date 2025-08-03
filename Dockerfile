FROM ubuntu:24.04 AS build

ENV DEBIAN_FRONTEND=noninteractive

COPY /packages.txt /

RUN apt-get update && apt-get install -y $(cat /packages.txt)

ENV VIRTUAL_ENV=/opt/venv
RUN python3 -m venv $VIRTUAL_ENV
ENV PATH="$VIRTUAL_ENV/bin:$PATH"

COPY requirements.txt /
RUN python3 -m pip install -r /requirements.txt --no-cache-dir

COPY .bash_aliases /root/.bash_aliases

RUN mkdir /conker
WORKDIR /conker
