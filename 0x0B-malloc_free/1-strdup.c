#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 * Return: NULL if str = NULL,
 * On success, the _strdup function returns a pointer to the
 * duplicated string. It returns NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	int a = 0, b = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[b])
	{
		b++;
	}
	s = malloc((sizeof(char) * b) + 1);
	if (s == NULL)
		return (NULL);
	while (a < b)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
