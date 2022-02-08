#include "main.h"

/**
 *print_last_digit - prints last digit of number
 *
 *@c: number being printed
 *
 * Return: always 0
 */
int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
		c = -c;
	_putchar(c = '0');
	return (c);
}
