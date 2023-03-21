/*
 * File: 101-natural.c
* written by Steve
 */

#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 * Return: Always 0.
 */
int main(void)
{
	int s, sum = 0;

	for (s = 0; s < 1024; s++)
	{
		if ((s % 3) == 0 || (s % 5) == 0)
			sum += s;
	}

	printf("%d\n", sum);

	return (0);
}

