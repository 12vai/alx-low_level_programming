#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list.
 * @h: list of type listint_t to print
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t t = 0;

	while (h != NULL) {
		printf("%d\n", h->n);
		t++;
		if (h->next == NULL)
			break;
		h = h->next;

	}

	return (t);
}


