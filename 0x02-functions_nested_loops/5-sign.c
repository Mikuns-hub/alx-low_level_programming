#include "main.h"

/**
 * print_sign - checking for the sign of numbers
 * @n: The number to be chnaged
 * Return: 1 for positive, -1 for negative or 0 for anyting else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
