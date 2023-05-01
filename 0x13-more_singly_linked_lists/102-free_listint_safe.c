#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to the head node
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *next_node = NULL, *loop = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		next_node = current->next;
		free(current);
		current = next_node;
		if (current == loop)
		{
			*h = NULL;
			exit(98);
		}
		if (current != NULL && current < loop)
			loop = current;
	}

	*h = NULL;
	return (count);
}
