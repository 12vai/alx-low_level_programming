#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to the head node
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *loop = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		loop = current->next;
		current = current->next;

		if (loop <= current)
		{
			*h = NULL;
			exit(98);
		}

		free(loop);
	}
	*h = NULL;

	*h = NULL;

	return (count);
}
