#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of a linked list
 *@head: pointer to head node
 *Return: head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
