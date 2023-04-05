#include "main.h"

/**
 * _strlen_recursion - Calcualting the length of a string
 * @s: the string whose length will be counted
 * Return: Count
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
		return (_strlen_recursion(s) + 1);
}
