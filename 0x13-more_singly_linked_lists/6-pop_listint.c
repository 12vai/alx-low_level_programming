#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n).
 * @head: pointer to the head node of the list.
 *
 * Return: the head node's data (n).
 *         If the linked list is empty, returns 0.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	if (*head == NULL) /* if the linked list is empty */
		return (0);

	current = *head; /* Stole the head node in a temporary pointer */
	data = current->n; /* Store the head node's data (n) */
	*head = (*head)->next; /* Move the head pointer to the next node */
	free(current); /* Free the memory of the previous head head node */

	return (data);
}
