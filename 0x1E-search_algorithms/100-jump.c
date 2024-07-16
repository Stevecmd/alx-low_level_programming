/*
 * File: 100-jump.c
 */

#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t current_index, jump_index, jump_step;

	if (array == NULL || size == 0)
		return (-1);

	jump_step = sqrt(size);
	for (current_index = jump_index = 0;
		 jump_index < size && array[jump_index] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n",
			   jump_index, array[jump_index]);
		current_index = jump_index;
		jump_index += jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   current_index, jump_index);

	jump_index = jump_index < size ? jump_index : size;
	for (; current_index < jump_index && array[current_index] < value;
		 current_index++)
		printf("Value checked array[%ld] = [%d]\n",
			   current_index, array[current_index]);
	if (current_index < size)
		printf("Value checked array[%ld] = [%d]\n",
			   current_index, array[current_index]);

	return (current_index < size && array[current_index] == value ?
		(int)current_index : -1);
}
