#include "main.h"

/**
 * _isdigit - print digit while check from number 0 - 9
 * @c: check char c
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
