#include "main.h"

/**
 * print_diagsums - prints  the sum of the two diagonals
 * of a square matrix of integers.
 * @a: the matrix
 * @size: the size of matrics
 */
void print_diagsums(int *a, int size)
{
	int k, sum1 = 0, sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 += a[k];
		a += size;
	}
	 a -= size;
}
