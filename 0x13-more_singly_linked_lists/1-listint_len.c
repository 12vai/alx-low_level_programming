#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		t++;
		h = h->next;
	}

	return (t);
}
