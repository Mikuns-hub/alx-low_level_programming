#include "main.h"

/**
 * _strcmp - its compares two string
 * @s1: first value
 * @s2: second value
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			if (s1[a] < s2[a])
				return (s1[a] - s2[a]);
			else if (s1[a] > s2[a])
				return (s1[a] - s2[a]);
		}
	}
	return (0);
}
