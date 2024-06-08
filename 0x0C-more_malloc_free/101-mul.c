#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if str contains only digits, 0 otherwise
 */
int is_digit(char *str)
{
	int i = 0;

	if (str[0] == '\0')
		return (0);

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * error - prints an error message and exits
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * do_multiplication - performs multiplication of two numbers
 * @num1: first number as a string
 * @num2: second number as a string
 * @result: array to store the result
 * @len1: length of num1
 * @len2: length of num2
 */
void do_multiplication(char *num1, char *num2, int *result, int len1, int len2)
{
	int i, j, carry, n1, n2;

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}
}

/**
 * prepare_result_string - prepares the result string
 * @result: array containing the result of multiplication
 * @len: length of the result array
 *
 * Return: pointer to the result string
 */
char *prepare_result_string(int *result, int len)
{
	int i = 0, j = 0;
	char *final_result;

	while (i < len && result[i] == 0)
		i++;

	if (i == len)
	{
		final_result = malloc(2);
		if (final_result == NULL)
			error();
		final_result[0] = '0';
		final_result[1] = '\0';
		return (final_result);
	}

	final_result = malloc(len - i + 1);
	if (final_result == NULL)
		error();

	while (i < len)
		final_result[j++] = result[i++] + '0';
	final_result[j] = '\0';

	return (final_result);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number as a string
 * @num2: second number as a string
 *
 * Return: pointer to the result string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, len = 0;
	int *result;
	char *final_result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	len = len1 + len2;
	result = calloc(len, sizeof(int));
	if (result == NULL)
		error();

	do_multiplication(num1, num2, result, len1, len2);
	final_result = prepare_result_string(result, len);
	free(result);

	return (final_result);
}

/**
 * main - entry point for the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3)
		error();

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
		error();

	result = multiply(num1, num2);
	printf("%s\n", result);
	free(result);

	return (0);
}
