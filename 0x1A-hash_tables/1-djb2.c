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
