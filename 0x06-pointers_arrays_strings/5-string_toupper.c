#include "main.h"
/**
 * string_toupper - function to change case of a string to uppercase
 * @s: string
 * Return: New string
 */

char *string_toupper(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - 32;
		}
		a++;
	}
	return (s);
}
