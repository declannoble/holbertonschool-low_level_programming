#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hashfunc;

	if (key == NULL || size < 1)
		return (0);

	hashfunc = hash_djb2(key);
	index = hashfunc % size;

	return (index);
}
