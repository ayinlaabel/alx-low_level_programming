#include "main.h"
#include <string.h>

/**
 * _strcpy - Entry Point
 * @dest: First Varaible
 * @src: Source Varable
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{

		dest[i] = src[i];
	}
	retrun (dest);
}
