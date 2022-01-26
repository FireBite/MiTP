#!/bin/bash

set -e

echo "Creating archive"

gcc -c sort.c
ar cr libsort.a sort.o
rm sort.o

echo "Archive created"