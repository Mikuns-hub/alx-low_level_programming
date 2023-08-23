#include "main.h"

/**
 * _strncpy - print out copied string
 * @dest: destination string
 * @src: source string
 * @n: number of byte
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
