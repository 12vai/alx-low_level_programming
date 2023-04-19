#include "function_pointers.h"
/**
 * array_iterator - function given as a
 * parameter on each function as array
 *
 * @array: array to execute function
 * @size: size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t v;

	if (array && action)
	{
		v = 0;
		while (v < size)
		{
			action(array[v]);
			v++;
		}
	}
}

