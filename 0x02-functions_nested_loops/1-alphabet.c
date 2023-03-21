#include "main.h"

/**
 * print_alphabet - print all letters in lowercase
 * written by Steve
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
