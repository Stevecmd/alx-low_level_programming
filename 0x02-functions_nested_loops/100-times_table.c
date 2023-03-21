#include "main.h"

/**
 * print_times_table - prints the times table n times starting with 0
 * @n: number of times to print the table
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	for (int x = 0; x <= n; x++)
	{
		for (int y = 0; y <= n; y++)
		{
			int z = x * y;
			if (y == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
				if (z < 10)
					_putchar(' ');
				else if (z < 100)
					_putchar((z / 10) + '0');
				else
					_putchar((z / 100) + '0');
				_putchar((z % 10) + '0');
			}

			if (y < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}