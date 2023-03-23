#include "main.h"

/**
 * _isupper - function to check for uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 * 0 if uppercase
 * 1 for other ie lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
