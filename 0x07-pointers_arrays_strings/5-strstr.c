#include <stdio.h>
#include "main.h"

/**
 * _strstr - main function that Returns a pointer to the beginning of the located substring
 * @haystack: string
 * @needle: first occurence of substring needle
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *a = haystack;
	char *b = needle;

	while(*a == *b && *b != '\0')
	{
		a++;
		b++;
	}
	
	if(*b == '\0')
		return(haystack);
	}
	return(0);
}
