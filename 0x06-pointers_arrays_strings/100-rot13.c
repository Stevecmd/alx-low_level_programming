#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 *
 * @s: string to encode
 * Return: string s
 */
char *rot13(char *s)
{
	int b;

	for (b = 0; s[b]; b++)
	{
		if (((s[b] >= 'a') && (s[b] <= 'm')) || ((s[b] >= 'A') && (s[b] <= 'M')))
		{
			s[b] += 13;
		}
		else if (((s[b] >= 'n') && (s[b] <= 'z'))
				|| ((s[b] >= 'N') && (s[b] <= 'Z')))
		{
			s[b] -= 13;
		}
	}
	return (s);
}
