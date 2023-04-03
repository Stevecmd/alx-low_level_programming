#include <stdio.h>
#include "main.h"

/**
 * _strstr - main function that Returns a pointer to the beginning of the located substring
 * @haystack: string
 * @needle: first occurence of substring needle
 * Return: Always 0 (Success)
 */

 char *_strstr(char *haystack, char *needle)
 {
    for (; *haystack != '\0'; haystack++)
    {
        char *one = haystack;
        char *two = needle;
            while(*one == *two && *two != '\0')
            {
                one++;
                two++;
            }
            if(*two == '\0')
                return(haystack);
    }
    return(NULL);
 }