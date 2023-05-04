#include "main.h"

/**
 * flip_bits - counts the number of bits neede to be
 * flipped to get from one number to another.
 * @n: the number.
 * @m: the nuber to flip n to.
 *
 * Return: the necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int v = 0;

	while (diff != 0)
	{
		v += diff & 1;
		diff >>= 1;
	}
	return (v);
}
