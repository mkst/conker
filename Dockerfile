FROM ubuntu:20.04 as build

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y \
      binutils-mips-linux-gnu \
      build-essential \
      less \
      libglib2.0 \
      python3 \
      python3-pip \
      unzip \
      wget

RUN python3 -m pip install \
      capstone pyyaml pycparser \
      colorama ansiwrap watchdog python-Levenshtein cxxfilt

RUN wget \
        https://github.com/n64decomp/qemu-irix/releases/download/v2.11-deb/qemu-irix-2.11.0-2169-g32ab296eef_amd64.deb \
        -O qemu.deb && \
    echo "8170f37cf03a08cc2d7c1c58f10d650ea0d158f711f6916da9364f6d8c85f741 qemu.deb" | sha256sum --check && \
    dpkg -i qemu.deb && \
    rm qemu.deb

RUN mkdir /conker
WORKDIR /conker
