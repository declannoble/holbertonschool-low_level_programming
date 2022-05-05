#include "lists.h"
#include <string.h>

/**
 * free_dlistint - frees a list
 * @head: pointer
 * Return: 0 success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
