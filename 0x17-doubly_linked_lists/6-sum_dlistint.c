#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all data elements in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * This function iterates through a doubly linked list
 * and calculates the sum of
 * all the integer data elements stored in each node.
 * It returns the total sum
 * of all data elements in the list.
 *
 * Return: The sum of all the data elements in the doubly linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
