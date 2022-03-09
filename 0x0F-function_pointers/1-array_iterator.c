#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes function as a parameter on each element
 * @size: size of array
 * @array: array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
