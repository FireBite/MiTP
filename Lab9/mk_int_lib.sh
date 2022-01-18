#!/bin/bash

set -e

echo "Creating archive"

gcc -c *_int.c
ar cr libsortint.a *_int.o
rm *_int.o

echo "Archive created"