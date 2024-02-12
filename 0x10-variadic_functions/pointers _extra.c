include <stdio.h>

/**
  main - entry point
  
* it declares a pointer variable
* and initializes it to "NULL"
* prints the value of the pointer
* Return: Always 0 (success) 
*/

int main(void)
{
    int *p = NULL;
    printf("The value of p is %p\n", p);
    return (0);
}