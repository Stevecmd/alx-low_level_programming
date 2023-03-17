#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int s, a;

	for (s = 48; s <= 56; s++)
	{
		for (a = 49; a <= 57; a++)
		{
			if (a > s)
			{
				putchar(s);
				putchar(a);
				if (s != 56 || a != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
