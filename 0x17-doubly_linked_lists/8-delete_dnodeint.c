#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t list at a given index.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The index of the node to delete.
 *
 * Return: 1 upon success, -1 if it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (current_node == NULL)
			return (-1);
		current_node = current_node->next;
	}

	if (current_node == *head)
	{
		*head = current_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{

		current_node->prev->next = current_node->next;
		if (current_node->next != NULL)
			current_node->next->prev = current_node->prev;
	}

	free(current_node);
	return (1);
}
