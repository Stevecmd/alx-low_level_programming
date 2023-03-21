#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @s: the int to extract the last digit from
 * Return: value of the last digit
 * written by Steve
 */
int print_last_digit(int s)
{
	int a;

	if (s < 0)
	s = -s;

	a = s % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}

