#!/bin/bash

set -e

echo "Compiling program"

./mk_char_lib.sh
gcc zad19.c -L. -lsortchar -o zad19

echo "Program compilled"
