#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, c;

	c = 0;

	for (a = 0; str[a] != '\0'; a++)
		c++;

	n = (c / 2);

	if ((c % 2) == 1)
		n = ((c + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
