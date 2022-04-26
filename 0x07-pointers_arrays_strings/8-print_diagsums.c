#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry Point
 * @a: Variable
 * @size: Variable
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int b = 0;
	int c = 0;

	for (i = 0; i < size; i++)
	{
		b += a[(i * size) + i];
		c += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", b, c);
}
