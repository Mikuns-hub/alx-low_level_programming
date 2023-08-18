#include "main.h"

/**
 * print_line - prints straight lines in the terminal
 * @n: It is the number of times the character _ should print
 * Return: void
 */

void print_line(int n)
{
	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar ('_');
		}
	_putchar('\n');
	}
}
