#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: if big_endian - 1.
 */
int get_endianness(void)
{
	int t = 1;
	char *v = (char *)&t;

	if (*v == 1)
		return (1);

	return (0);
}
