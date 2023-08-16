#include "main.h"

/**
 * _isalpha - checking for lowercase or uppercase letter
 * @c: The character to be checked
 * Return: 1 for alphabet characters or 0 for anything
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
