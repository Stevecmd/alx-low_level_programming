#include <stdio.h>

int main(void)
{
    int i;
    char s;
    int *p;

    printf("\nThe memory address of variable 'i': %p\n",&i);
    printf("The memory address of variable 's': %p\n",&s);
    printf("The size of a pointer on this machine is: %lu\n", sizeof(p));
    return (0);
}