#include <stdio.h>

int main(void)
{
    int i;
    int *p;
    
    i = 100;
    p = &i;

    printf("The value of 'i' is: %d\n", i);
    printf("\nThe memory address of 'n' is: %p\n", &i);
    printf("\nThe value of the pointer 'p' is: %p\n", p);
    *p = 500;
    printf("\nAfter Georeferencing, the value of the pointer 'p' is now: %d\n", i);
    printf("\nAfter Georeferencing, the address of the pointer 'p' is now: %p\n", &p);
    return (0);
}