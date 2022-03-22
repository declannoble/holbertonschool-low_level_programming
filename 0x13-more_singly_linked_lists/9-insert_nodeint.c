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

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		return (newnode);
	}
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (new);
	}
	current = *head;
	while (i < (idx - 1) && cuurrent->next)
	{
		current = current->next;
		i++;
	}
	if (i < index - 1)
		return (NULL);

	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
