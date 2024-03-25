#include "main.h"
/**
 * _memset - Entry point to fill with value
 * @s: address of memory to be filled
 * @b: value to be allocated
 * @n: number of bytes to change
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
