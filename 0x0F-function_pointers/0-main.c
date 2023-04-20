#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
	unsigned int a;

	printf("Hello, my uppercase name is ");
	a = 0;
	while (name[a])
	{
		if (name[a] >= 'a' && name[a] <= 'z')
	{
		putchar(name[a] + 'A' - 'a');
	}
		else
		{
		putchar(name[a]);
		}
		a++;
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0);
}
