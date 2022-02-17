#include "main.h"

/**
 * _strcat- concatenate 2 sting 
 * @src: string
 *
 * @dest: string
 *
 * Return: 0 success
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b = 0;

	a = 0;
	while (dest[a] != '\0')
		a = a + 1;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b = b + 1;
		a = a + 1;
	}

	dest[a] = '\0';

	return (dest);
}
