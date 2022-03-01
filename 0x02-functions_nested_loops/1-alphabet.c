#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - prints the alphabet in lower care
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
