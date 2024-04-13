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
    hash_node_t *current;
    hash_node_t *new_node;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return 0;

    index = key_index((const unsigned char *)key, ht->size);

    current = ht->array[index];

    /* Check if key already exists and update its value */
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            char *value_copy = strdup(value);
            if (!value_copy)
                return 0;

            free(current->value);
            current->value = value_copy;
            return 1;
        }
        current = current->next;
    }

    /* Key does not exist, create a new node and insert it */
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return 0;

    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(new_node);
        return 0;
    }

    new_node->value = strdup(value);
    if (!new_node->value)
    {
        free(new_node->key);
        free(new_node);
        return 0;
    }

    /* Insert the new node at the beginning of the linked list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}
