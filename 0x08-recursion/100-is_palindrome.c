#include "main.h"

/**
 * _length - returns length of string
 * @s: string
 * Return: length as integer
 */
int _length(char *s)
{

	if (*s != '\0')
	{
		return (1 + _length(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * _comparator - compare characters
 * @s: string
 * @first: first index
 * @last: last index
 * Return: integer match 1, 0 otherwise
 */

int _comparator(char *s, int first, int last)
{
	if (s[first] != s[last])
		return (0);
	else if (first == last && s[first] == s[last])
		return (1);
	else if (first == last - 1 && s[first] == s[last])
		return (1);
	else
		return (_comparator(s, first + 1, last - 1));
}

/**
 * is_palindrome - determinates if a string is palindrome
 * @s: string
 *
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int length, first, last;

	length = _length(s);
	first = 0;
	last = length - 1;

	if (length == 0 || length == 1)
		return (1);
	else
		return (_comparator(s, first, last));
}
