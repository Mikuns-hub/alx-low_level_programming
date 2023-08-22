#include "main.h"

/**
 * rev_string - prints reverse strings
 * @s: contains the string
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
		lenght++;
	for (i = 0; i < lenght / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[lenght - 1 - i];
		s[lenght - 1 - i] = j;
	}
}
