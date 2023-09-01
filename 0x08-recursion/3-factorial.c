#include "main.h"

/**
 * factorial - to print the factorial of a given number
 * @n: the funtion to the return the factorial
 * Return: faactorial of n;
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
