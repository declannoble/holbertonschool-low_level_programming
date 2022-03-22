#include "lists.h"
/**
 *get_nodeint_at_index- deletes nth node of linked list
 *@head: pointer to head node
 *@index: index of nodes
 *Return: NULL if non existant, otherwise return node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int n = 0;

	while (tmp != NULL)
	{
		if (n == index)
			return (temp);
		n++;
		tmp = tmp->next;
	}
	return (NULL);
}
