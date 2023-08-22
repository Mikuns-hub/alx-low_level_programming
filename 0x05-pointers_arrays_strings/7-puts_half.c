#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: Contains the string
 * Return: void
 */

void puts_half(char *str)
{
	int i, n, lenght = 0;

	for (i = 0; str[i] != '\0' ; i++)
		lenght++;
	n = (lenght - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
