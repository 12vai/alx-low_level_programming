#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beggining of a list
 *
 * @head: the original linked list
 *
 * @str: the string to add to the node
 *
 * Return: the address of the new list or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{

		return (NULL);
	}

	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}

