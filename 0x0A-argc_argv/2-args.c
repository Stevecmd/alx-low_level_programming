#include "main.h"
#include <stdio.h>

/**
 * main - print All arguments, including the first one.
 * @argc: argumtn count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
