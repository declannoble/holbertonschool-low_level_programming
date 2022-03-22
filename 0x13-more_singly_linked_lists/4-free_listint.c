#include "lists.h"
#include <string.h>

/**
 * free_listint - frees a list
 * @head: pointer
 * Return: 0 success
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
