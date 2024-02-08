#include "main.h"
/**
 * get_bit - Retrieves the value of a bit at a given index.
 * @n: Specific bit.
 * @index: Index of the bit whose value is to be retrieved - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
