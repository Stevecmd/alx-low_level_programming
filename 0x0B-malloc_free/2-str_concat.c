#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: points to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string.
 * The function should return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	l = a + b;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);
	b = 0;
	while (c < l)
	{
		if (c <= a)
			s[c] = s1[c];
		if (c >= a)
		{
			s[c] = s2[b];
			b++;
		}
		c++;
	}
	s[c] = '\0';
	return (s);
}
