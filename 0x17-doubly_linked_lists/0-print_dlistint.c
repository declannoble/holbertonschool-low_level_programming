#include "lists.h"
/**
 * print_dlistint - prints elements of a list
 *@h: list to be printed
 *Return: count of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
