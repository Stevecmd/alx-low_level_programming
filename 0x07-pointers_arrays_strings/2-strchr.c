#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: main input (string)
 * @c: character of interest
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
    int a;

    for (a=0; s[0] >= '\0'; a++)
    {
        if (s[a] == c)
            return (s+2);
    }
    return (NULL);
}
