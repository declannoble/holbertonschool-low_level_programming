#include <stdio.h>

/**
 * print_name - prints name
 * @name: the name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

			f(name);
}
