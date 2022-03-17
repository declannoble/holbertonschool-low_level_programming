#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 *@h: list
 * Return: count of elements.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	count++;
	}
	return (count);

}
