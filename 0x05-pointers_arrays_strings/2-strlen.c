#include "main.h"

/**
 * _strlen - returnsthe length of the string
 * @s: string
 * Returns: length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
