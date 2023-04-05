#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: value of a pointer
 * @to: pointer of a char
 * Description: set value of a pointer to a char
 * Return: NULL
 **/

void set_string(char **s, char *to)
{
	*s = to;
}
