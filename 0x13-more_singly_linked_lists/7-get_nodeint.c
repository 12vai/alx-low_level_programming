#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the list.
 * @index: index of the node, starting at 0.
 *
 * Return: pointer to the nth node of the list.
 * if the node does not, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int v = 0;

	while (new != NULL)
	{
		if (v == index)
			return (new);
		new = new->next;
		v++;
	}

	return (NULL);
}
