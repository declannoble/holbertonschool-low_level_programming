#include "main.h"
/**
 *print_alphabet_x10- print alphabet ten times
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a <= 9)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c = c + 1;
		}
		a = a + 1;
		_putchar('\n');
	}

}
