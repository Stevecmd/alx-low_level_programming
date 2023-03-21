#include "main.h"
/*Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
   * Prototype: void print_alphabet_x10(void);
   * You can only use _putchar twice in your code
*/
void print_alphabet_x10(void)
{
	char chars;
	int n;

	n = 0;

	while (n < 10)
	{
		chars = 'n';
		while (chars <= 'z')
		{
			_putchar(chars);
			chars++;
		}
		_putchar('\n');
		n++;
	}
}

