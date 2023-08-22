#include "main.h"

/**
 * _strlen - Prints the total number of strings
 * @s: the pointer
 * Return: 0
 */

int _strlen(char *s)
{
	int total_str;

	total_str = 0;
	while (s[total_str] != '\0')
	{
		total_str++;
	}
	return (total_str);
}
