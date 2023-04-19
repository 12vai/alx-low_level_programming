#include "function_pointers.h"
/**
 * int_index - ...
 * @array: ...
 * @size: ...
 * @cmp: ...
 *
 * Return: ...
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
