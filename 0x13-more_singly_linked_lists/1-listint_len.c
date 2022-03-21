#include "lists.h"
/**
 * listint_len- counts number of elements in a linked list
 *@h: list to check
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
