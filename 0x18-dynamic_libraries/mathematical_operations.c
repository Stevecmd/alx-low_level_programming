int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - sums up two integers
 * @a: first integer to add
 * @b: second integer to add
 * Return: Sum
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Difference between two integers
 * @a: first integer
 * @b: second integer to subtract
 * Return: the subtraction value
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: first integer to add
 * @b: second integer to add
 * Return: Product of a and b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - division of two integers
 * @a: the number to be divided
 * @b: the number by which the dividend is divided
 * Return: The quotient of the division
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - Modulus of two integers
 * @a: the number to be divided
 * @b: second integer to divide
 * Return: the remainder / modulus
 */

int mod(int a, int b)
{
	return (a % b);
}
