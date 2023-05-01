#include "lists.h"

/**
 * sum_listint - Returns the sum of all data (n) of a listint_t linked list.
 * @head: pointer to the head of the list.
 *
 * Return: the sum of all the data (n) of the linked list
 * if the list is empty, returns 0.
 */
int sum_listint(listint_t *head)
{
	int t = 0;
	listint_t *new = head;

	while (new != NULL)
	{
		t += new->n;
		new = new->next;
	}

	return (t);
}
