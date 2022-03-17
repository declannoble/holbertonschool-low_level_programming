#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - find length of a string
 *@str: string to check
 *Return: length of string
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *add_node - adds new node at beginning of list_t
 *@head: head node
 *@str: string
 *Return: address of new element or NULL if failure occurs
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);

	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = (*head);
	}
	(*head) = new;

	return (new);
}
/**
 *add_node_end - adds node to the end of a linked list
 *@head: head node
 *@str: string
 *Return: address of element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);

	if (*head == NULL)
	{
		(*head) = new;
		new->next = NULL;
	}
	else
	{
		list_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
			last->next = new;
		}

	}
	return (new);
}
