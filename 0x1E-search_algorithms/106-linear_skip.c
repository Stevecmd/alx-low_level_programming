#include "search_algos.h"

/**
 * print_checked_value - Prints the value checked at a given index
 * @node: Pointer to the node being checked
 */
void print_checked_value(skiplist_t *node)
{
	printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
}

/**
 * print_found_range - Prints the range of indexes
 * where the value might be found
 * @start: Pointer to the start node of the range
 * @end: Pointer to the end node of the range
 */
void print_found_range(skiplist_t *start, skiplist_t *end)
{
	printf("Value found between indexes [%lu] and [%lu]\n",
		   start->index, end->index);
}

/**
 * traverse_express_lane - Traverses the express lane to find the range
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer to the node where the search should continue
 */
skiplist_t *traverse_express_lane(skiplist_t *list, int value)
{
	skiplist_t *express = list;

	while (express->express != NULL)
	{
		print_checked_value(express);
		if (express->express->n >= value)
			break;
		express = express->express;
	}

	return (express);
}

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where
 * value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express, *prev;

	if (list == NULL)
		return (NULL);

	express = traverse_express_lane(list, value);
	prev = express;

	if (express->express != NULL)
	{
		express = express->express;
		print_found_range(prev, express);
	}
	else
	{
		while (express->next != NULL)
			express = express->next;
		print_found_range(prev, express);
	}

	express = prev;
	while (express != NULL && express->n < value)
	{
		print_checked_value(express);
		express = express->next;
	}

	if (express != NULL && express->n == value)
	{
		print_checked_value(express);
		return (express);
	}

	return (NULL);
}
