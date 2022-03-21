#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint - adds a new node at the beginning of a linked list
 *@head: pointer to the headnode of list
 *@n: integer
 *Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
