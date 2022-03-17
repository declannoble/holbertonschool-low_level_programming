#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - find length of a string
 *@str: string to check
 *Return: length of string
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		return (i);
}

/**
 *add_node - adds new node at beginning of list_t
 *@head: head node
 *@str: string
 *Return: address of new element or NULL if failure occurs
 */
