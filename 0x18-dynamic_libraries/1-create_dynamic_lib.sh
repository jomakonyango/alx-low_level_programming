#!/bin/bash
# 1-create_dynamic_lib.sh

# Compile all .c files into object files
gcc -Wall -fPIC -c *.c

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Make all files executable
chmod +x *.c *.so README.md

# Optional: Display the library information
ls -l liball.so
