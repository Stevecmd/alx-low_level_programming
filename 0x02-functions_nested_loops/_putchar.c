#include "main.h"
#include <unistd.h>
/**
 * int _putchar - writes the character c to stdout
 * main - Writes a program that prints _putchar, followed by a new line.
 * Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1)); 
}
