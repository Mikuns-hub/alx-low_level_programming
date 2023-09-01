#include "main.h"

/**
 * is_prime_number - prints the actual prime number
 * @n: the number to be checked
 * Return: 1 if the number chekced is not a prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculetes if the number is a prime number
 * @n: the number to be checked
 * @i: iterator
 * Return: 1 if n is a prime number
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (actual_prime(n, i - 1));
}
