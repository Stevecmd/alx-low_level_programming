#include "main.h"
/**
 * flip_bits - Calculates the Hamming distance between two numbers.
 *             This represents the number of bits needed to be flipped
 *             to get from one number to another.
 *
 * @n: The initial number.
 * @m: The target number to flip n to.
 *
 * Return: The count of bits needed to be flipped to reach from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
