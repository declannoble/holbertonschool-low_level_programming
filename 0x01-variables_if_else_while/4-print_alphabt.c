#include <stdio.h>
/**
 * main - use putchar to print alphabet sans q+e
 *
 * Return: Always 0 
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}

