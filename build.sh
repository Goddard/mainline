#!/bin/bash

# ugly placeholder reference until we get Makefile / qmake process worked out

cd src && \
qmake -project "QT += network widgets" -o mainline.pro && \
qmake && \
make
