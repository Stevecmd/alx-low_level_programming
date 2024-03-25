# alx-low_level_programming
**Table of Contents**
## 1. [0x00. C - Hello, World](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x00-hello_world)
## 2. [0x01. C - Variables, if, else, while](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x00-hello_world)
## 3. [0x02-functions_nested_loops](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x02-functions_nested_loops)
## 4. [0x03. C - Debugging](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x02-functions_nested_loops)
## 5. [0x04. C - More functions, more nested loops](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
## 6. [0x06-pointers_arrays_strings](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x06-pointers_arrays_strings)
## 7. [0x07-pointers_arrays_strings](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x07-pointers_arrays_strings)
## 8. [0x08-recursion](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x08-recursion)
## 9. [0x09-static_libraries](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x09-static_libraries)
## 10. [0x0A-argc_argv](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x0A-argc_argv)
## 11. [0x0B-malloc_free](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x0B-malloc_free)
## 12. [0x0C-more_malloc_free](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x0C-more_malloc_free)
## 13. [0x0D-preprocessor](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x0D-preprocessor)
## 14. [0x0E-structures_typedef](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x0E-structures_typedef)
## 15. [0x0F-function_pointers](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x0F-function_pointers)
## 16. [0x10-variadic_functions](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x10-variadic_functions)
## 17. [0x12-singly_linked_lists](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x12-singly_linked_lists)
## 18. [0x13-more_singly_linked_lists](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x13-more_singly_linked_lists)
## 19. [0x14-bit_manipulation](https://github.com/Stevecmd/alx-low_level_programming/tree/master/0x14-bit_manipulation)


# Structure of a program in C
```c
/* Documentation Section */
/* This is a simple C program that prints "Hello, World!" */

/* Link Section */
#include <stdio.h> /* This includes the standard input/output library */

/* Definition Section */
#define MAX 100 /* This defines a macro named MAX with a value of 100 */

/* Global Declaration Section */
int global_var; /* This declares a global variable */

/* Subprogram Section */
void print_hello() { /* This declares a function that prints "Hello, World!" */
    printf("Hello, World!\n");
}

/* Main Section */
int main() {
    /* Local Declaration Section */
    int local_var; /* This declares a local variable */

    /* Executable Section */
    print_hello(); /* This calls the function to print "Hello, World!" */
    return 0; /* This returns control to the operating system */
}
```
Here’s what each section does:

- **Documentation Section:** <br />
This is where you include comments about the program, its author, creation date, and purpose.
- **Link Section:** <br />
This is where you include any libraries needed for the program.
- **Definition Section:** <br />
This is where you define constants and macros.
- **Global Declaration Section:** <br />
This is where you declare global variables.
- **Subprogram Section:** <br />
This is where you define functions.
- **Main Section:** <br />
This is where the main() function is defined. It has two parts:
- **Local Declaration Section:** <br />
This is where you declare variables that are local to the main() function.
- **Executable Section:** <br />
This is where you put the statements to be executed.

# Program template:
```c
/**
 * Addition - function to calculate addition of integers
 * @int a: number
 * @int b: number
 *
 * Return: result of sum.
 */
int add(int a, int b)
{
    int sum;
    sum = a + b;
    return (sum);
}

int main(void)
{
    int i;
    int j;
    int res;

    i = 2;
    j = 4;
    res = add(i, j);
    print("%d\n", res);
    return 0;
}
```
## Format specifiers:
They are used in functions like printf() and scanf() to determine the type of data that is being dealt with. Here are some of the popular ones: <br />
- `%d` or `%i`: Used for integers.
- `%c`: Used for a single character.
- `%s`: Used for a string of text.
- `%f`: Used for floating point numbers.
- `%lf`: Used for double.
- `%u`: Used for unsigned integers.
- `%x` or `%X`: Used for unsigned integers in hexadecimal.
- `%o`: Used for unsigned integers in octal.
- `%p`: Used for pointers.
For example, if you want to print an integer `int num = 10;`, you would use `printf("%d", num);`. Similarly, for a character `char ch = 'A';`, you would use `printf("%c", ch);`. <br />
Format specifiers help functions understand the type of data they are expected to handle.

