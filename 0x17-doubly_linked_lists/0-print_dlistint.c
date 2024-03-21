#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a the list.
 * @h: Pointer to the head node of the list.
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node_count;

	node_count = 0;

	if (h == NULL)
	{
		printf("Empty list\n");
		return (node_count);
	}

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
