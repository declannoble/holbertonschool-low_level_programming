#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars
 *@size: chars
 *@c: char
 *Return: pointer to allocated memory
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int index;

	if (size == 0)
		return (0);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (0);

	index = 0;
	while (index < size)
	{
		arr[index] = c;
		index++;
	}
	return (arr);
}
