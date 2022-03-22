#include "lists.h"
#include <string.h>

/**
 * free_list - frees a list
 * @head: pointer
 * Return: 0 success
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
