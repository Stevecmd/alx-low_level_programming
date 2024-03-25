#include "main.h"

/**
 * _isupper - Check if a letter is in Uppercase
 * @c: The number to be checked
 * Return: 1 if true and 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
