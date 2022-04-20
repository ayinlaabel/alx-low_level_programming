#include "main.h"
#include <stdio.h>
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
		t = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = t;
	}
	printf("%s\n", s);
}
