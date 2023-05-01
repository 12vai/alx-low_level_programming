#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to the head node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *vio_node = NULL;
	listint_t *current_node = *head;
	listint_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next = vio_node;
		vio_node = current_node;
		current_node = next_node;
	}

	*head = vio_node;
	return (*head);
}
