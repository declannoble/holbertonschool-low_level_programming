#include "main.h"
/**
 * _strlen - returns length of string
 *
 * @s: pointer
 *
 * Return: i (string count)
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * print_rev - prints string
 *@s: string being printed
 * Return : 0 success
 */
void print_rev(char *s)
{
	int l;
	int p = 0;

	l = _strlen(s) - 1;
	p = l;
	while (l >= 0)
	{
		_putchar(s[p]);
		p--;
		l--;
	}
	_putchar('\n');

}
