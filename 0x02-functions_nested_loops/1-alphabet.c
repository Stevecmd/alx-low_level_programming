#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 * written by Steve
 * Write a function that prints the alphabet, in lowercase, followed by a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
