#include "main.h"
/**
 *_isalpha - checks for an alphabetic character
 *
 *@c: character to check
 *
 *Return: 1 if success and 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
			}
	else
		return (0);
}
