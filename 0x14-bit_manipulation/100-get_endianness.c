#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return:
 *   - If the system is big-endian: 0
 *   - If the system is little-endian: 1
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}

