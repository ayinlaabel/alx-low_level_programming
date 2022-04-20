#include "main.h"
#include <string.h>

/**
 * _atoi - Entry Point
 * @s: Varaible
 * Return: Always 0
 */

int _atoi(char *s)
{
	int i, len;
	int x = 0;
	int y = -1;
	int z = 0;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9') &&  c > 0)
			break;
		if (s[i] == '-')
			x--;
		if (s[i] == '+')
			x++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			c++;
		}
	}
	while (c > 0)
	{
		z += ((s[i - 1] - '0') * y);
		i--;
		c--;
		y *= 10;
	}
	if (x >= 0)
	{
		z *= 1;
	}
	else
	{
		z *= -1;
	}
	return (z);
}
