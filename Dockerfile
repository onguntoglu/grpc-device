# syntax=docker/dockerfile:1

FROM ubuntu:latest
ENV DEBIAN_FRONTEND noninteractive

RUN apt-get update -y && apt-get upgrade -y

RUN git clone https://github.com/onguntoglu/grpc-device.git grpc-device \
    && cd grpc-device \
    && git submodule update --init --recursive

RUN mkdir -p cmake/build \
    && cd cmake/build \
    && cmake -DCMAKE_BUILD_TYPE=Release ../.. \
    && make -j8
