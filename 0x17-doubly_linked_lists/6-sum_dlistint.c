#include "lists.h"
/**
 *sum_dlistint - returns sum of all data for a linked list
 *@head: pointer to head node
 *Return: sum of all date of linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
