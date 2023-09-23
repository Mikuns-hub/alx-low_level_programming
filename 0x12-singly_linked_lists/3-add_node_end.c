#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - it make an addition of a new node at the end of a linked list
 * @head: it makes a double pointer to a new list
 * @str: string that is inputed in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int lenght = 0;

	while (str[lenght])
		lenght++;

	n = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = lenght;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
