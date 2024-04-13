#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * key is stored in hash table.
 *
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: Index of the key.
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
