#include "main.h"

/**
 * print_alphabet_x10 - Produce alphabets x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char b;
	int i = 0;

	while (i < 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		i++;
	}
}
