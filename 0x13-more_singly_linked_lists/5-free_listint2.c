#include "lists.h"

/**
 * free_listint2 - frees a listint_list list.
 * @head: pointer to the head of the lidt.
 *
 * the function sets the head to NULL.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *v;

	if (head == NULL)
		return;

	new = *head;
	while (new != NULL)
	{
		v = new;
		new = new->next;
		free(v);
	}

	*head = NULL;
}
