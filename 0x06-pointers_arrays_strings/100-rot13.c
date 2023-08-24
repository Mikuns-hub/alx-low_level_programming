#include "main.h"

/**
 * rot13 - it encode string by finding the rot 13 alphabet
 * @s: encoded strimg
 * Return: 0
 */

char *rot13(char *s)
{
	int i, j;
	char *n = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *m = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; n[j] != '\0'; j++)
		{
			if (s[i] == n[j])
			{
				s[i] = m[j];
				break;
			}
		}
	}
	return (s);
}
