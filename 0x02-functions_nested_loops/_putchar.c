#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * c is the return value
 * main - Write a program that prints _putchar, followed by a new line.
 */
int _putchar(char c)
{
	return (write(1, &c, 1)); 
}
