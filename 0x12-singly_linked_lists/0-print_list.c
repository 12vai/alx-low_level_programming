#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list_t list to print.
 * Return: the number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	list_t *head = NULL;

	head = malloc(sizeof(list_t));
	if (head == NULL)
		return (2);

	head->str = "Hello";

	head->len = 6;

	head->next = NULL;

	list_t *seco = malloc(sizeof(list_t));

	if (seco == NULL)
		return (2);
	seco->str = "World";
	seco->len = 6;
	seco->next = NULL;

	head->next = seco;

	size_t count = print_list(head);

	printf("Number of nodes: %lu\n", count);

	return (0);
}
