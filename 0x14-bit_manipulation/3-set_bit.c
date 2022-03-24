#include "main.h"
/**
 * set_bit- sets value of bit at index to 1
 *@n: number
 *@index: index
 *Return: 1 if no error or -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* if n is larger than 32 bits error occurs */
	if (n == NULL || index > 31)
		return (-1);
	/* shifts starting bit left to compare with given index */
	*n = *n | 1 << index;
	return (1);
}
