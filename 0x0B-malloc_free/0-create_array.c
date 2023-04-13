#include "main.h"
/**
 * create_array - array for prints a syring
 * @size: number of ellemnts arrays
 * @c: char
 * Return: Always 0 (sucess)
 *
 */


char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int position;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (position = 0; position < size; position++)
		str[position] = c;
	return (str);
}
