#include "main.h"
/**
 * _realloc - reallocates a memmory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int v;

	if (ptr != NULL)
		clone = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
		return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);
	for (v = 0; v < (old_size || v < new_size); v++)
	{
		*(relloc + v) = clone[v];
	}
	free(ptr);
	return (relloc);
}
