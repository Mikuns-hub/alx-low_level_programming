#include "main.h"

/**
 * reverse_array - it reverses the content of an array of integers
 * @a: array
 * @n: number of element in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
