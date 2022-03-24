#include "main.h"
/**
 * binary_to_uint - convert a string of binary to unsigned int
 * @b: the string to convert
 * Description: convert a string of binary numbers to unsigned int
 * Return: converted number of 0 if error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' &&  b[i] != '1')
			return (0);

		result = result << 1;
		result = result + b[i] - '0';
		i++;
	}
	return (result);
}
