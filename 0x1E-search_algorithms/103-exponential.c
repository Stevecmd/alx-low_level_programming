#include <stdio.h>
#include <stddef.h>

/* Function prototype for binary_search */
int binary_search(int *array, size_t left, size_t right, int value);

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the subarray to search in
 * @right: Right index of the subarray to search in
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 * or -1 if value is not present or array is NULL
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;
	size_t i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 * or -1 if value is not present or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left;
	size_t right;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binary_search(array, left, right, value));
}
