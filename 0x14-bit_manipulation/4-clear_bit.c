#include "main.h"

/**
 * clear_bit - Sets the value of s bit at a given index to 0.
 * @n: a pointer to the bit.
 * @index: the index to set the value at - index start at 0.
 *
 * Return: if an error occurs - -1.
 * otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
