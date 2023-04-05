#include "main.h"

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % (n - 1) == 0)
		return (0);
	return (actual_prime(n - 1));
}

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	return (actual_prime(n));
}
