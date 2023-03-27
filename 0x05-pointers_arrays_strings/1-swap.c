#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * Prototype: void swap_int(int *a, int *b);
 * @a: first integer to swap
 * @b: second integer to swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
