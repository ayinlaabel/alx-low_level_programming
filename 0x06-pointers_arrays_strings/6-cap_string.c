#include "main.h"

/**
 * *cap_string - Entry Point
 * @str: Variable
 * Return: Always 0
 */

char *cap_string(char *str)
{
	char x[] = ",\t;\n; .!?\"(){}";
	int a, b, c;

	for (b = 0; str[b] != '\0'; b++)
	{
		a = 0;

		if (i == 0)
		{
			a = 1;
		}
		else
		{
			for (c = 0; x[c] != '\0'; c++)
			{
				if (str[b - 1] == x[c])
				{
					a = 1;
					break;
				}
			}
		}

		if (a == 1)
		{
			if (str[b] <= 'z' && str[i] >= 'a')
			{
				str[b] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
