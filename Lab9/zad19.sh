#!/bin/bash

set -e

echo "Compiling program"

./mk_char_lib.sh
gcc zad19.c -L. -lsortchar -o zad19
gcc zad19a.c -L. -lsortchar -o zad19a

echo "Program compilled"
