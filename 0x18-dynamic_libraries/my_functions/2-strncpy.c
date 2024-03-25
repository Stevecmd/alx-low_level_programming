#include "main.h"
/**
 * *_strncpy - copy the string
 * @dest : destination string
 * @src : source string
 * @n : number of strings to use
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
