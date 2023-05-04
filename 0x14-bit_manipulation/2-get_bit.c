#include "main.h"
#include <stdlib.h>
/**
 * grt_bit - gets the value of a given index.
 * @n: the bit.
 * @index: the index to get the value at - index start at 0.
 *
 * Return: if an error occurs - -1.
 * otherwise - the value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;

	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
