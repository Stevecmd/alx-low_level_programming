#include "lists.h"

/**
 * listint_len - function that adds a new node at the 
 * beginning of a listint_t list.
 * @h: linked list of type listint_t that will be processed
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
