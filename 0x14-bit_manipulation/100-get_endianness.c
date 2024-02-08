#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * This function determines whether the system is big-endian or little-endian
 * by examining the memory representation of an integer. It checks whether the
 * least significant byte is stored at the lowest memory address (little-endian)
 * or the most significant byte is stored at the lowest memory address (big-endian).
 *
 * Return:
 *   - If the system is big-endian: 0
 *   - If the system is little-endian: 1
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
