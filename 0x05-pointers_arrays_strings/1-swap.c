#include "main.h"

/**
 * swap_int - This program swaps the values of two intergers
 * @a: first pointer
 * @b: second pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int empty;
	int *n = &empty;

	*n = *a;

	*a = *b;

	*b = *n;
}
