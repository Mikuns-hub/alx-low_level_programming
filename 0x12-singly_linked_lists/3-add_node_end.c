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
	list_t *n;
	list_t *tempe = *head;
	unsigned int lenght = 0;

	while (str[lenght])
		lenght++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->lenght = lenght;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (tempe->next)
		tempe = tempe->next;

	tempe->next = n;

	return (n);
}
