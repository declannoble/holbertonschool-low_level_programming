#include "lists.h"
/**
 *get_dnodeint_at_index- deletes nth node of linked list
 *@head: pointer to head node
 *@index: index of nodes
 *Return: NULL if non existant, otherwise return node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
       	dlistint_t *tmp = head;
	unsigned int n = 0;

	while (tmp != NULL)
	{
		if (n == index)
			return (tmp);
		n++;
		tmp = tmp->next;
	}
	return (NULL);
}
