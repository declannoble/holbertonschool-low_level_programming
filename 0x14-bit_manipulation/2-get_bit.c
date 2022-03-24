#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 *@n: number
 *@index: index
 *Return: value of the bit or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result = 0;
	/* if index is larger than 64 bit error occurs */
	if (index > 63)
		return (-1);

	result = n >> index;

	if (result & 1)
	{
		return (1);
	}
	return (0);
}
