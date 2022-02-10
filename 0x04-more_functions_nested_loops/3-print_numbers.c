#include "main.h"

/**
 * print_numbers - prints numbers
 * Return: 0
 */
void print_numbers(void)
{
	char r = '0';

	while (r <= '9')
	{
		_putchar(r);
		r = r + 1;
	}
	_putchar('\n');
}
