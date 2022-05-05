#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint - adds new node at the beginning of a doubly linked list
 *@head: pointer to head node
 *@n: value to add
 *Return: address of element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
