#include "main.h"

/**
 * _memcpy - Entry Point
 * @dest: Destination Variable
 * @src: Source Variable
 * @n: Loop
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
