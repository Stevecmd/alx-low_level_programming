#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int printf(const char *format, ...)
{
    const char *str1 = "9 8 10 24 75 +9\n";
    const char *str2 = "Congratulations, you win the Jackpot!\n";
    
    const char *ptr1 = str1;
    const char *ptr2 = str2;

    while (*ptr1 != '\0') {
        putchar(*ptr1);
        ptr1++;
    }

    while (*ptr2 != '\0') {
        putchar(*ptr2);
        ptr2++;
    }

    exit(EXIT_SUCCESS);
}
