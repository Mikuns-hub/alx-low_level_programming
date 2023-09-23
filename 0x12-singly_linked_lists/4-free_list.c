#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Create spaces and frees a linked list
 * @head: list_t list to be checked and freed
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *tempe;

	while (head)
	{
		tempe = head->next;
		free(head->str);
		free(head);
		head = tempe;
	}
}
