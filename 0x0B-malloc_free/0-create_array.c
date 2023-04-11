#include "main.h"
/**
 * create_array - array for prints a syring
 * @size: number of ellemnts arrays
 * @c: char
 * Return: Always 0 (sucess)
 */


char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
	return (NULL);
}

else
{
	position + 0;
	while (position < size) /*While for array*/
	{
		*(buffer + position) = c;
		position++;
	}

	return (buffer);
}
