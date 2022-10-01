#! /bin/sh
gcc -c *.c; ar -cr liball.a *.o; ranlib liball.a;
