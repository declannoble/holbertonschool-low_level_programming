#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase letter
 * @c: character being checked
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
		c = 1;
	else
		c = 0;
	return (c);
}
