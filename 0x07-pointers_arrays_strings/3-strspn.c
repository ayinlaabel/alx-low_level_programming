#include "main.h"
#include <stdio.h>

/**
 * _strspn - Entry Point
 * @s: Variable
 * @accept: Variable
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, a;
	unsigned int r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; s[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				r++;
				break;
			}
		}
		if (s[a] == '\0')
		{
			return (r);
		}
	}
	return (r);
}
