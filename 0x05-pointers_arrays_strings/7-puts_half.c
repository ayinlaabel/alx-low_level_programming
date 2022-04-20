#include "main.h"
#include <stdio.h>

/**
 * puts_half - Entry Point
 * @str: Varaible
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i, len;
	int x = 0;
	
	len = strlen(str);
	if (len % 2 != 0)
	{
		x += 1;
	}

	for (i = (len + x) / 2; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
