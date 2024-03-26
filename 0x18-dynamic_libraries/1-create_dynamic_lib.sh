#!/bin/bash
gcc -c *.c -fpic || { echo "Compilation failed"; exit 1; }

gcc -shared -o liball.so *.o || { echo "Linking failed"; exit 1; }

echo "Dynamic library liball.so created successfully."


