#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to pointer to the head node
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *violet_node, *prev_node;
	unsigned int v;

	if (*head == NULL)
		return (-1);

	violet_node = *head;
	if (index == 0)
	{
		*head = violet_node->next;
		free(violet_node);
		return (1);
	}


	for (v = 0; v < index; v++)
	{
		prev_node = violet_node;
		violet_node = violet_node->next;
		if (violet_node == NULL)
			return (-1);
	}

		prev_node->next = violet_node->next;
		free(violet_node);

		return (1);
}
