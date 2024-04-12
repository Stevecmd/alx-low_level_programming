# 0x1A. C - Hash tables 

## Requirements
### General

 - Allowed editors: `vi`, `vim`, `emacs`
 - All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
 - All your files should end with a new line
 - A `README.md` file, at the root of the folder of the project is mandatory
 - Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
 - You are not allowed to use global variables
 - No more than 5 functions per file
 - You are allowed to use the C standard library
 - The prototypes of all your functions should be included in your header file called `hash_tables.h`
 - Don’t forget to push your header file
 - All your header files should be include guarded

## More Info
### Data Structures

Please use these data structures for this project:\
```c

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

```

## Tasks
0. >>> ht = {} 
Write a function that creates a hash table.

 - Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
     - where `size` is the size of the array
 - Returns a pointer to the newly created hash table
 - If something went wrong, your function should return `NULL`

```sh

stevecmd@DESKTOP-UTB295U:~/alx-low_level_programming/0x1A-hash_tables$ cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
        hash_table_t *ht;

        ht = hash_table_create(1024);
        printf("%p\n", (void *)ht);
        return (EXIT_SUCCESS);
}
stevecmd@DESKTOP-UTB295U:~/alx-low_level_programming/0x1A-hash_tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
stevecmd@DESKTOP-UTB295U:~/alx-low_level_programming/0x1A-hash_tables$ ./a
0x564ca87fd2a0
stevecmd@DESKTOP-UTB295U:~/alx-low_level_programming/0x1A-hash_tables$ valgrind ./a
==4957== Memcheck, a memory error detector
==4957== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4957== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==4957== Command: ./a
==4957== 
0x4a8c040
==4957== 
==4957== HEAP SUMMARY:
==4957==     in use at exit: 8,208 bytes in 2 blocks
==4957==   total heap usage: 3 allocs, 1 frees, 9,232 bytes allocated
==4957== 
==4957== LEAK SUMMARY:
==4957==    definitely lost: 16 bytes in 1 blocks
==4957==    indirectly lost: 8,192 bytes in 1 blocks
==4957==      possibly lost: 0 bytes in 0 blocks
==4957==    still reachable: 0 bytes in 0 blocks
==4957==         suppressed: 0 bytes in 0 blocks
==4957== Rerun with --leak-check=full to see details of leaked memory
==4957== 
==4957== For lists of detected and suppressed errors, rerun with: -s
==4957== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```

File: `0-hash_table_create.c`

1. djb2 
Write a hash function implementing the djb2 algorithm.

- Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
- You are allowed to copy and paste the function from [Here](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)

```sh

stevecmd@DESKTOP-UTB295U:~/alx-low_level_programming/0x1A-hash_tables$ cat 1-djb2.c
/**
 * hash_djb2 - Calculates the hash value of a given string
 * using the djb2 algorithm.
 *
 * This function takes a pointer to an unsigned char array
 * representing the string
 * and computes its hash value using the djb2 algorithm.
 * The djb2 algorithm is a simple but effective hashing
 * algorithm designed by Daniel J. Bernstein.
 *
 * @param str A pointer to an unsigned char array representing the string.
 *            It should point to the first character of the string.
 * @return The hash value of the input string. (Unsigned long integer.)
 *         The hash value is calculated using the djb2 algorithm.
 * @str: Pointer to the string.
 *
 * Return: Always 0 (Success)
 */

unsigned long int hash_djb2(const unsigned char *str)
{
        unsigned long int hash;
        int c;

        hash = 5381;
        while ((c = *str++))
        {
                hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
        }
        return (hash);
}
stevecmd@DESKTOP-UTB295U:~/alx-low_level_programming/0x1A-hash_tables$ cat 1-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
        char *s;

        s = "cisfun";
        printf("%lu\n", hash_djb2((unsigned char *)s));
        s = "Don't forget to tweet today";
        printf("%lu\n", hash_djb2((unsigned char *)s));
        s = "98";
        printf("%lu\n", hash_djb2((unsigned char *)s));
        return (EXIT_SUCCESS);
}
stevecmd@DESKTOP-UTB295U:~/alx-low_level_programming/0x1A-hash_tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
stevecmd@DESKTOP-UTB295U:~/alx-low_level_programming/0x1A-hash_tables$ ./b
6953392314605
3749890792216096085
5861846
stevecmd@DESKTOP-UTB295U:~/alx-low_level_programming/0x1A-hash_tables$ valgrind ./b
==7746== Memcheck, a memory error detector
==7746== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7746== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==7746== Command: ./b
==7746== 
6953392314605
3749890792216096085
5861846
==7746== 
==7746== HEAP SUMMARY:
==7746==     in use at exit: 0 bytes in 0 blocks
==7746==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==7746== 
==7746== All heap blocks were freed -- no leaks are possible
==7746== 
==7746== For lists of detected and suppressed errors, rerun with: -s
==7746== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```

File: `1-djb2.c`