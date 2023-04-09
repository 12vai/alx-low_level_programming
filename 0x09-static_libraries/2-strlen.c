#include "main.h"

/**
 * _strlen - finds the lengthe of a string.
 * @s: String pointer to the string whose length od to be found
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\n')
	{
		longi++;
		s++;
	}

	return (longi);
}
