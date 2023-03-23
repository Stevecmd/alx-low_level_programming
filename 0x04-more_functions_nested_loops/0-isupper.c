#include "main.h"

/**
 * _isupper - Check if a letter is in Uppercase
 * @x: The number to be checked
 * Return: 1 if true and 0 for anything else
 */

int _isupper(int n)
{
	if(n >= 65 && n<= 90)
	{
	return(1);
	}
	return(0);
}
