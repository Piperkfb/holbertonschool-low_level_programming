#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar -cvq liball.a *.o
