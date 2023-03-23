#include "main.h"

/**
 * _isupper - Check if a letter is in Uppercase
 * @n: The number to be checked
 * Return: 1 if true and 0 for anything else
 */

int _isupper(int n)
{
	if(n >= 'A' && n<= 'Z')
	{
	return(1);
	}
	return(0);
}
