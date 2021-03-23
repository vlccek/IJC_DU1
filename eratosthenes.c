#include <math.h>
#include <stdio.h>
#include "bitset.h"
#include "eratosthenes.h"

void Eratosthenes(bitset_t pole) {
	unsigned long size = bitset_size(pole);


	for (unsigned long i = 0; i < size; ++i) {
		if (bitset_getbit(pole, i) == 1 )
		for (unsigned long j = 1; j < size; ++j * i) {
			bitset_setbit(pole, j, 1)
		}

	}
}

