#include "main.h"

/**
 * _memcpy - prints a function that copies memory data
 * @dest: the destination memory
 * @src: the source memory
 * @n: the number of byte
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
