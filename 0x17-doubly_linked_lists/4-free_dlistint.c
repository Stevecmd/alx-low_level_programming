#include "lists.h"

/**
 * free_dlistint - Frees a linked list.
 * @head: The head of the list.
 *
 * Description: This function frees each node of a doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
