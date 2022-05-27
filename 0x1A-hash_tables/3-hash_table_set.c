#include "hash_tables.h"

/**
 * hash_table_set - adds an element(key, value) into a hash table
 * @ht: a pointer to the hash table
 * @key: the key
 * @value: the value
 * Return: 1 on success, 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode = NULL;
	hash_node_t *current = NULL;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	newnode = malloc(sizeof(*newnode));

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
