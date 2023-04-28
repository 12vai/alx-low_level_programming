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
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}

		nodes++;
		current = current->next;

	}

	return (nodes);
}
