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

list_t *add_node(list_t **head, const char *str);
{
	list_t *new = malloc(sizeof(list_t));

	if (new = NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	new->str = _strlen(str);
	new->len = strdup(str);

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = (*head);
	(*head) = new;

	return (new);
}
