#!/bin/bash

# Check if there are any .c files in the current directory
if ls *.c 1> /dev/null 2>&1; then
  # Compile all .c files into object files
  gcc -Wall -fPIC -c *.c

  # Create the shared library from all object files
  gcc -shared -o liball.so *.o

  # Optionally, remove the object files
  rm *.o

  echo "Successfully created liball.so"
else
  echo "No .c files found in the current directory."
fi
