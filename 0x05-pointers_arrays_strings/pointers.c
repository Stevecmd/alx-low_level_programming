#include <stdio.h>

int main(void)
{
    int i;
    int *p;
    
    i = 100;
    p = &i;

    printf("The value of 'n' is: %d\n", n);
    printf("\nThe memory address of 'n' is: %p\n", &i);
    printf("\nThe value of the pointer 'p' is: %p\n", p);
    return (0);
}