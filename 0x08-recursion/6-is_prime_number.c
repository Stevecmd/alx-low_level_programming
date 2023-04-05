#include "main.h"

/**
 * is_prime_number - evaluates if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if it is not
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		return (0);
	}

	return (1);
}
