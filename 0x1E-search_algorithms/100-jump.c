#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 * or -1 if value is not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 0, i = 0;
	size_t step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (high < size && array[high] < value)
	{
		low = high;
		high += step;
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
	}

	if (high >= size)
		high = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (i = low; i <= high && i < size && array[i] < value; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}

	if (i <= high && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
