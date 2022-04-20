#include "main.h"

/**
 * _strlen - Entry Point
 * @s: String
 * Return: Lenght of Varaible (s)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
