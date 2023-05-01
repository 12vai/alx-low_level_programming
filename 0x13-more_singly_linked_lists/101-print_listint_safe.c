#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *loop = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		if (current == loop)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
		if (current != NULL && current < loop)
			loop = current;
	}

	return (count);
}
