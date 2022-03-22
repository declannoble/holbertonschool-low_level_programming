#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at given position
 * @head: double pointer to the head node
 * @idx: index of the node to insert
 * @n: value for new node
  * Return: pointer to node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *newnode = *head;

	if (newnode == NULL)
		return (NULL);

	newnode = malloc(sizeof(*newnode));

	while (current != NULL)
	{
		if (i == idx)
		{
			newnode->n = n;
			newnode->next = current->next;
			break;
		}
		current = current->next;
		i++;
	}
	return (newnode);
}
