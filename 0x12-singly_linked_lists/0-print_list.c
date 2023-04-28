#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list_t list.
 *
 * Return: the number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *new = h;

	while (new != NULL)
	{
		if (new->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", new->len, new->str);
		}

		nodes++;
		new = new->next;

	}

	return (nodes);
}
