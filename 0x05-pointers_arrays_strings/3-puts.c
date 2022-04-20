#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry Point
 * @str: Varaible
 * Return: Always 0
 */


void _puts(char *str)
{
	int i, len, temp;

	len = strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}

	printf("%s\n", str);
}
