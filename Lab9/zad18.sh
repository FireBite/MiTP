#!/bin/bash

set -e

echo "Compiling program"

./mk_int_lib.sh
gcc zad18.c -L. -lsortint -o zad18
gcc zad18a.c -L. -lsortint -o zad18a

echo "Program compilled"
