#include "main.h"
/**
 * _strpbrk - searches for a string for any set of bytes
 *@s: pointer
 *@accept: pointer
 * Return: 0 success
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return(s);
		}
		s++;
	}
	return('\0');}
