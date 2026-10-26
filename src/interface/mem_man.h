/*
 *
 *
 * 
 * 
*/

#include "mem_map.h";

typedef struct mem_man
{
    mem_map_t * mem_map;
} mem_man_t;

void * n_mem(size_t size);
void inc_ref(void * ptr);
void dec_ref(void * ptr);