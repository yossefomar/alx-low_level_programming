#!/bin/bash

# Get all the .c files in the current directory
c_files=$(ls *.c)

# Compile each .c file and create its corresponding .o file
for c_file in $c_files
do
  gcc -c $c_file -o ${c_file%.c}.o
done

# Create the static library from all the .o files
ar rcs liball.a *.o

# Clean up the .o files
rm *.o

