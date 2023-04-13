#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int ls1, ls2, lsout, v;

	if (s2 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;
	lsout = ls1 + n;

	lsout = malloc(lsout + 1);
	if (lsout == NULL)
		return (NULL);

	for (v = 0; v < lsout; v++)
		if (v < ls1)
			sout[v] = s1[v];
		else
			sout[v] = s2[v - ls1];
	sout[v] = '\0';

	return (sout);
}
