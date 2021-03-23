#include <stdlib.h>
#include "error.h"
#include <assert.h>
#include <limits.h>

typedef unsigned long *bitset_t;
typedef unsigned long bitset_index_t;


#define size_ul sizeof(unsigned long)

#define bitset_create(jmeno_pole, velikost) unsigned long jmeno_pole[(velikost/size_ul) + 1] = {velikost,0}; \
											_Static_assert((velikost > 0 && velikost > size_ul ), "bitset_create: Chyba při zadávání velikosti pole." );

#define bitset_alloc(jmeno_pole, veliksot) (velikost > 0  && velikost > size_ul)? bitset_t jmeno_pole = calloc((velikost/size_ul) + 1 , size_ul); :  error_exit("bitset_alloc: Chyba zadání velikosti pole"); (jmeno_pole == NULL)

#define bitset_free(jmeno_pole) free(jmeno_pole)

#define bitset_size(jmeno_pole) jmeno_pole[0]

#define bitset_setbit(jmeno_pole, index, vyraz) (index > jmeno_pole[1]) ? error_exit("bitset_getbit: Index %lu mimo rozsah 0..%lu",(unsigned long)index, (unsigned long)jmeno_pole[1]) : (jmeno_pole[index+1] = vyraz);

#define bitset_getbit(jmeno_pole, index) jmeno_pole[index]
