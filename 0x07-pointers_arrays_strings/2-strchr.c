#include "main.h"
/**
 * _strchr - locates character in a string
 *@s: pointer
 *@c: char
 * Return: 0 success
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return ('\0');
}
