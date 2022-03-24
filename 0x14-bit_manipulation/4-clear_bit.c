#include "main.h"
/**
 * clear_bit - sets value of a bit to 0 at given index
 *@n: number
 *@index: index
 *Return: 1 if successful execution -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
