#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * @size: size of an array
 * @c: the char to be used
 * Return: NULL if size = 0 or a pointer to the array,
 * or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
