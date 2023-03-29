#include "main.h"
/**
 * reverse_array - function to reverse the elements of an array
 * @n: function parameter - number of elements in the aray
 * @a: function parameter - aray to be reversed
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	j = n - 1;
	for (i = 0; i < (n / 2); i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
