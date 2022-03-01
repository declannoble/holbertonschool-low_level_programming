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
  unsigned int i;
  char *array;

  array = malloc(sizeof(char) * size);

  if (array == NULL)
    return (0);

  for (i = 0; i < size; i++)
    {
      array[i] = c;
    }
  return (array);
}
