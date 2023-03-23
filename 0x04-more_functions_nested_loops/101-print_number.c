#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int a)
{
	unsigned int b;

	if (a < 0)
	{
		b = -a;
		_putchar('-');
	} else
	{
		b = a;
	}

	if (b / 10)
	{
		print_number(b / 10);
	}

	_putchar((b % 10) + '0');
}
