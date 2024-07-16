#include "search_algos.h"

/**
 * print_out_of_range - Prints a message when a value is out of range
 * @pos: The position that is out of range
 */
void print_out_of_range(size_t pos)
{
	printf("Value checked array[%lu] is out of range\n", pos);
}

/**
 * calculate_position - Calculates the position using interpolation formula
 * @low: The lower bound index
 * @high: The upper bound index
 * @array: The array to search in
 * @value: The value to search for
 *
 * Return: The calculated position
 */
size_t calculate_position(size_t low, size_t high, int *array, int value)
{
	return (low + (
		((double)(high - low) / (array[high] - array[low])) *
		(value - array[low])
	));
}

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 * or -1 if value is not present or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

		pos = calculate_position(low, high, array, value);

		if (pos >= size)
		{
			print_out_of_range(pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	pos = calculate_position(low, high, array, value);
	if (pos >= size)
		print_out_of_range(pos);

	return (-1);
}
