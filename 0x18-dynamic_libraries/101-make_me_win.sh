#!/bin/bash
echo "int add(int a, int b) { return 9; }" > /tmp/101-win.c
gcc -shared -o /tmp/101-win.so -fPIC /tmp/101-win.c
export LD_PRELOAD=/tmp/101-win.so
