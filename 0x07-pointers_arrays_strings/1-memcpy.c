#include "main.h"
/**
 * _memcpy - Entry point of value to be copied
 * @dest: destination to copy value to
 * @src: source of input
 * @n: number of bytes from memory area
 * Return: Pointer to dest
 */

 char *_memcpy(char *dest, char *src, unsigned int n)
 {
    unsigned int a = 0;

    for (a = 0; a < n; a++)
        dest[a] = src[a];
    return (dest);
 }
