#include "main.h"
/**
 * binary_to_uint - convers binary strings into unsigned int
 *@b: string to be converted
 *Return: unsigned int or 0 if error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '0' && b[i] != '1')
		return (0);
	
	while (b[i] == '0' || b[i] == '1')
	{
		result <<= 1;
		result = result + b[i] - '0';
		i++;
	}
	return (result);
}
