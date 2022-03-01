#include "main.h"
/**
 * _memset - fills memory with constant bytes
 * @s: pointer
 * @b: char
 * @n: integer
 * Return: 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
