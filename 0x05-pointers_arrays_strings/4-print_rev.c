#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev -  Entry Point
 * @s: Varaible
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i, t;

	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
	}
	printf("%s\n", s);
}
