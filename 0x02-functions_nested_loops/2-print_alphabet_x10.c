#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * written by Steve
 */
void print_alphabet_x10(void)
{
	char chars;
	int n;

	n = 0;

	while (n < 10)
	{
		chars = 'a';
		while (chars <= 'z')
		{
			_putchar(chars);
			chars++;
		}
		_putchar('\n');
		n++;
	}
}

