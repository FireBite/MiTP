#!/bin/bash

set -e

echo "Creating archive"

gcc -c *_char.c
ar cr libsortchar.a *_char.o
rm *_char.o

echo "Archive created"