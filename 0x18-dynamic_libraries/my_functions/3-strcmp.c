#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			if (s1[a] < s2[a])
				return (s1[a] - s2[a]);
			else if (s1[a] > s2[a])
				return (s1[a] - s2[a]);
		}
		else
			return (0);
	}
	return (0);
}
