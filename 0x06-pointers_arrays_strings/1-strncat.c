#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: pointer to the string
 * Return: the value of i, which is the size of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * _strncat concatenates strings
 * @dest: pointer to the string to be modified
 * @src: pointer to the string with the string to be copied
 * @n: the number of bytes from src that can be used
 * Return: returns  pointer 2 (to modified string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen;
	int count = 0;

	destlen = _strlen(dest);

	while (*(src + count) != '\0' && count < n)
	{
		dest[destlen + count] = src[count];
		count++;
	}
	dest[destlen + count] = '\0';
	return (dest);
}
