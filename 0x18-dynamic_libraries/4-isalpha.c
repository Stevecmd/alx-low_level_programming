#include "main.h"

/**
 * _isalpha - checking for alphabetic characters
 * @c: the character to be checked
 * Return: 1 if character is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
