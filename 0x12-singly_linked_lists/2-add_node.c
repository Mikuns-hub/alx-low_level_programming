#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - it makes an addition to the node at begining of the linked list
 * @head: It is a double poiter to the list
 * @str: the string to add to an element
 * Return: 0 if its successful and return nulls if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->i = i;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
