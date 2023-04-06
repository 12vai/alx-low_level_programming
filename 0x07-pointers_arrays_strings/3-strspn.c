#include "main.h"
/**
 * _strspn - function that gets the length of a prefex substring
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int v;

	while (*s)
	{
		for (v = 0; accept[v]; v++)

		{
			if (*s == accept[v])
			{
				n++;
				breack;
			}
			else if (accept[v + 1] == '\0')
				return (n);
		}s++;
	}
	return (n);
}
