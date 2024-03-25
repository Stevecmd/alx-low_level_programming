#include "main.h"
/**
 * _strncat - concatenates two strings using n characterss at most
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be appended
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int a;

	for (a = 0; dest[a] != '\0'; a++)
		destlen++;
	for (a = 0; src[a] != '\0'; a++)
		srclen++;
	for (a = 0; a < n; a++)
		dest[destlen + a] = src[a];
	return (dest);
}
