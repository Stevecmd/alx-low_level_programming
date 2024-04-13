#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table to delete.
 *
 * This function deallocates all memory used by the hash table,
 * including the array and all nodes.
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
		return;

	hash_node_t *node, *tmp;
	unsigned long int i;

	/* Free each node and its key/value */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}

	/* Free the array and the hash table */
	free(ht->array);
	free(ht);
}
