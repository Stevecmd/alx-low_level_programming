#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: Pointer to the hash table to look at.
 * @key: The key whose value we want.
 *
 * Return: NULL - If the key cannot be found.
 *         Otherwise - the value of key.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);  /* Index out of bounds */

	node = ht->array[index];
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node != NULL) ? node->value : NULL);
}
