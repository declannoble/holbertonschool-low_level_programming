#include "main.h"

/**
 * print_numbers - prints numbers
 * Return: 0
 */
void print_most_numbers(void)
{
	int r;

	for (r = '0'; r <= '9'; r++)
	{
		if (r != '2' && r != '4')
			_putchar(r);
	}
	_putchar('\n');
}
