#include "main.h"

/**
 * *rot13 - Entry Point
 * @str: Variable
 * Return: Always 0
 */

char *rot13(char *str)
{
	int a, b;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 54; b++)
		{
			if(((str[a] <= 'z' && str[a] >= 'a') || (str[a] >= 'A')) && str[a] == x[b])
			{
				str[a] = y[b];
				break;
			}
		}
	}
	return (str);
}
