#include "main.h"
/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: Always 0 (success)
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int v, len;

	v = 0;
	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[v] = str[v]) != '\0')
		v++;
	return (duplicate);
}
