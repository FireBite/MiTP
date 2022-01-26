#!/bin/bash

set -e

echo "Compiling program"

./mk_sort_lib.sh
gcc zad18b.c -L. -lsort -o zad18b
gcc zad19b.c -L. -lsort -o zad19b

echo "Program compilled"
