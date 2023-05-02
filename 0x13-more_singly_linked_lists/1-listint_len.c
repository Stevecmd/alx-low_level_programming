#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that adds a new node at the 
 * beginning of a listint_t list.
 * @h: pointer to the head of the listint_t list.
 *
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t nums = 0;

	while (h)
	{
		nums++;
		h = h->next;
	}

	return (nums);
}
