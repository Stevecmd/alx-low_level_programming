#include "main.h"

/**
 * print_times_table - prints the times table n times starting with 0
 * @s: number of times to print the table
 * written by Steve
 */
void print_times_table(int s)
{
	int i, j, k;

	if (s >= 0 && s <= 15)
	{
		for (i = 0; i <= s; i++)
		{
			for (j = 0; j <= s; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
