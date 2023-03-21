#include "main.h"

/**
 * _isalpha - checks for the case of the alphabetic character
 * @s: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 * written by Steve
 */
int _isalpha(int s)
{
	return ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'));
}

