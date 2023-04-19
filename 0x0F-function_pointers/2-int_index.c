#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array..
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int v = 0;

	if (size > 0)
	{
		if (array == NULL || cmp == NULL)
		{
			while (v < size)
			{
				if (cmp(array[v]))
					return (v);
				v++;
			}
		}
	}

	return (-1);
}
