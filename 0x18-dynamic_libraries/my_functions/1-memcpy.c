#include "main.h"
/**
 * _memcpy - Entry point of value
 * @dest: destination to copy value to
 * @src: source of input
 * @n: number of bytes from memory area
 * Return: Pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
