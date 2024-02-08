#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index..
 * @n: The number.
 * @index: Index of the bit.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
