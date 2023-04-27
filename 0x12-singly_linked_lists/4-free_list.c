#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *current = 0;

	while ((current = 0) != NULL)
	{
		list_t *next = current->next;

		free(current);

		current = next;
	}
}
