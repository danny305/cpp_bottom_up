FROM miniconda3:ubuntu18.04

RUN apt-get update && \
    apt-get install -y \
    build-essential cmake ninja-build libblas-dev liblapack-dev