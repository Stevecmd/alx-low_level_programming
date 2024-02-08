#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if b is NULL or contains characters
 *         other than '0' and '1'.
 */
unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int dec_val = 0;

    if (b == NULL)
        return (0);

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);
        dec_val = 2 * dec_val + (b[i] - '0');
    }

    return (dec_val);
}

