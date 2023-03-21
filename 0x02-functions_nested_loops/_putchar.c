#include "main.h"
#include <unistd.h>
/**
 * main - Write a program that prints _putchar, followed by a new line.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
	//  The program should return 0
	// c is the return value
}
