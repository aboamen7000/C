#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library liball.a from the object files
ar -rc liball.a *.o

# Index the library for faster symbol lookup
ranlib liball.a

