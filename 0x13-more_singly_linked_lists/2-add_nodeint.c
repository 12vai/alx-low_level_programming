#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the head of the list
 * @n: integer to store in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = malloc(sizeof(listint_t));

	if (current == NULL)
		return (NULL);

	current->n = n;
	current->next = *head;
	*head = current;

	return (current);
}
