#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - allocates memory for using an array
 * @nmemb: array elements
 * @size: size of array
 * Return: arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i = 0;
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	t = arr;

	while (i < (size * nmemb))
	{
		t[i] = 0;
		i++;
	}
	return (arr);
}
