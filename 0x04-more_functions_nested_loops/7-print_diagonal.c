#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: variable
 * Return: 0
 */
void print_diagonal(int n)
{
	int a = 1;
	int b;

	while (a <= n && n > 0)
	{
		b = a - 1;

		while (b > 0)
		{
			_putchar(' ');
			b = b - 1;
		}
		_putchar('\\');
		_putchar('\n');
		a = a + 1;
	}
	if (n <= 0)
		_putchar('\n');
}
