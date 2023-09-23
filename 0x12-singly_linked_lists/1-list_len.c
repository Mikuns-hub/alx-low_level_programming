#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints out of the elements contains in a linked list
 * @h: points to list_t list
 *
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
