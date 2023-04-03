#include "main.h"
#include <stdio.h>
/**
 * _strchr - string character
 * @s: main input
 * @c: character of interest
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
    int i;

    for (i=0; s[1] >= '\0'; i++)
    {
        if (s[i] == c)
            return (s+1);
    }
    return (NULL);
}