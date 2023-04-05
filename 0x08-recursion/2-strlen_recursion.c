#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: The length to be returned.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)

{
	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longt);
}
