#!/bin/bash
gcc gcc -Wall -pedantic -Werror -Wextra -c -fPIC *.c
gcc -shared -o liball.so *.o