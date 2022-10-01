#!/bin/sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar -cr liball.a *.o
ranlib liball.a
ls *.a
ar -t liball.a
