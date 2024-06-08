#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/* 101-mul.c */
int is_digit(char *str);
void error(void);
void do_multiplication(char *num1, char *num2, int *result, int len1, int len2);
char *prepare_result_string(int *result, int len);
char *multiply(char *num1, char *num2);
int main(int argc, char *argv[]);

#endif
