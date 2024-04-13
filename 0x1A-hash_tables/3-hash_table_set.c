#include "hash_tables.h"

/**
 * hash_table_set - function to add element to hash table.
 * @ht: A pointer to the hash table to add or update the key/value to.
 * @key: Key to add - cannot be an empty string.
 * @value: The value associated with key.
 * must be duplicated, can be an empty string.
 *
 * Return: Success - 1.
 *         Otherwise - 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	/* Check for invalid input */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Calculate the index for the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Create a new node for the key-value pair */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* Copy the key and assign the value */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Insert the new node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
