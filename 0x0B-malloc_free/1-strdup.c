#include "main.h"
#include <stdlib.h>
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
  * _strdup - return a pointer to the new allocated memory address
  * @str: given string
  * Return: return the pointer to new string address
  */
char *_strdup(char *str)
{
	int length;
	int i;
	char *dupStr;

	if (str == NULL)
	{
		return (NULL);
	}
	length = _strlen(str);
	dupStr = malloc((length + 1) * sizeof(char));
	if (dupStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		dupStr[i] = str[i];
	}
	return (dupStr);

}
