#include "main.h"

/**
 * _islower - Check if a letter is in Lowercase
 * @c: The number to be checked
 * Return: 1 if true and 0 for anything else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
