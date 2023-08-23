#include "main.h"
#include <string.h>
/**
 * _strncat - to printsout the concatination of two strings
 * @dest: destination of the concatinated strings
 * @src: source of string
 * @n: number of each byte to be concatenated
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = strlen(dest);
	int a;

	for (a = 0; a < n && *src != '\0'; a++)
	{
		dest[destlen + a] = *src;
		src++;
	}
	dest[destlen + a] = '\0';
	return (dest);
}
