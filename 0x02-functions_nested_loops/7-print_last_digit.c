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
	int a;
	if (c < 0)
		c = -c;
	a = c % 10;
	if (a < 0)
		a= -a;
	_putchar('0' + a);
	return(a);
}
