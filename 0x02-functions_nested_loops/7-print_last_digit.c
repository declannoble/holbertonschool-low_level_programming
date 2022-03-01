#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 *
 * @c: number to be printed
 *
 * Return: success
 */


int print_last_digit(int c)
{
	int i;

	if (c < 0)
		c = -c;

	i = c % 10;

	if (i < 0)
		c = -c;
	_putchar(i + '0');

	return (i);
}
