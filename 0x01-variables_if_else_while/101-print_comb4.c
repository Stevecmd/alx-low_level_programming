#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s, a, d;

	for (s = 48; s < 58; s++)
	{
		for (a = 49; a < 58; a++)
		{
			for (d = 50; d < 58; d++)
			{
				if (l > a && a > n)
				{
					putchar(s);
					putchar(a);
					putchar(d);
					if (s != 55 || a != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
