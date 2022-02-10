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
		c = 0;
	else
		c = 1;
	return (c);
}
