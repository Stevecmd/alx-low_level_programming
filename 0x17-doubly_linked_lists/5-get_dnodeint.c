#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a given index in a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The index of the node to retrieve.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - a pointer to the node at the given index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;
    
    if (head == NULL)
        return (NULL);
    
    for (i = 0; i < index; i++)
    {
        if (head == NULL)
            return (NULL);
        head = head->next;
    }

    return (head);
}
