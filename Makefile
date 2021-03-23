SHELL = /bin/bash

CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -pedantic -O2

all: primes error ppm



error: error.c error.h
	$(CC) $(CFLAGS) -c error.c -o error.o

bitset: bitset.c bitset.h
	$(CC) $(CFLAGS) -c bitset.c -o bitset.o





clean:
	rm -f *.o primes primes-i steg-decode


run: primes
	./primes


zip: *.c *.h Makefile
	zip xvlkja07.zip *.c *.h Makefile
