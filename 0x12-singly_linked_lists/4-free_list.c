#include "lists.h"
#include <sting.h>

/**
 * free_list - frees a list
 * @head: pointer
 * Return: 0 success
 */
void free_list(list_t *head)
{
	list_t *dec;

	while (head != NULL)
	{
		dec = head;
		head = head->next;
		free(dec->str);
		free(dec);
	}
}
