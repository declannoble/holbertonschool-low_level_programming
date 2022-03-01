#include "main.h"

/**
 * print_line - prints
 * @n: character being evaluated
 * Return : 0
 */

void print_line(int n)
{
	while (n > 0)
	{
		n--;
		_putchar('_');
	}
	_putchar('\n');
}
