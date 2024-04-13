#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 *
 * Description: This function creates a hash table with an array of size elements.
 *              If the memory allocation fails for the hash table or the array,
 *              it returns NULL. Otherwise, it returns a pointer to the newly
 *              created hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	/* Allocating memory - hash table */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/* Setting the size of the hash table */
	hash_table->size = size;

	/* Allocating memory for the array of hash-nodes */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
		return (NULL);

	/* Initializing each element of the array to NULL */
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
