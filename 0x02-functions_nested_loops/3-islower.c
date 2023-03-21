#include "main.h"

/**
 * _is slower  - checkes if a character is lowercase
 * @c: the character
 * Return: 1 if latter is lowercase, 0 if not
 */
int _slower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
