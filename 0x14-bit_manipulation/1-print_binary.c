#include "main.h"
/**
 * print_binary - prints binary representation of number
 *@n: number
 *Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 31;
	int b = 0;
	int result = 0;

	while (i > 0 && result == 0)
	{
		/* shifts starting bit all the way to the right and compares */
		b = (n >> i) & 1;
		/* if the result of comparing bits is 1 */
		if (b == 1)
		{
			result = 1;
		}
		else
			i--;
	}
	while (i >= 0)
	{
		b = (n >> i) & 1;
		i--;
		_putchar(b + '0');
	}
}
