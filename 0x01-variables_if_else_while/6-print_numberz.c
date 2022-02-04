#include <stdio.h>
/**
 * main - print single digits using putchar
 *
 * Return: always 0
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
