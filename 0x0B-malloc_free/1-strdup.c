#include "main.h"
/**
 * _strlen - count array
 * @s: Array of elements
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	unsigned int v;

	v = 0;
	while (s[v] != '\0') /*count charecter of string*/
	{
		v++;
	}

	return (v);
}

/**
 * _strcpy - copy always
 * @src: array of elements
 * @dest: dest arrays
 * Return: dest
 */
char *_strcpy(char *dest, char src)
{
	int v = 0;

	while (src[v] != '\0')
	{
		dest[v] = src[v];
		v++;
	}
	dest[v] = '\0';
	return (dest);
}

/**
 * _strdup - array for prints a string
 * @str: array of elements
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	dst = (char *) malloc(size * sizeof(char));
	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str *);
	return (dst);
}
