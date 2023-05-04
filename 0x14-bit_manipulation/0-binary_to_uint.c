#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int v = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (; *b != '\0'; b++)
	{
		if (*b == '0')
		{
			v <<= 1;
		}
		else if (*b == '1')
		{
			v = (v << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (v);
}
