#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - show the number of elements of a list
 * @h: linked list
 *
 * Return: the number of elements of a list
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		h = h->next;
		t++;
	}
	return (t);
}
