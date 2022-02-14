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
 * _puts - prints string
 *@str: string being printed
 * Return : 0 success
 */
void _puts(char *str)
{
	int l;
	int p = 0;

	l = _strlen(str);
	while (l > 0)
	{
		_putchar(str[p]);
		p++;
		l--;
	}
	_putchar('\n');

}
