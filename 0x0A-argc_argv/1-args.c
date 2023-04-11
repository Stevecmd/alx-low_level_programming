#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: number, followed by a new line.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
