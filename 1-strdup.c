#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to allocated space in memory
 * @str: string
 * Return: 0 success
 */
char *_strdup(char *str)
{
  char *ar;
  int i = 0;
  int j = 0;

  if (str == NULL)
    return (NULL);

  while (str[i])
    i++;

  ar = malloc(sizeof(char) * (i + 1));

  if (ar == NULL)
    return (NULL);

  while (str[j])
    {
      ar[j] = str[j];
      j++;
    }
  ar[j + 1] = 0;
  return (ar);
}
