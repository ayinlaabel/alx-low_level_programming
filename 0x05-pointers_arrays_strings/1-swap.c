#include "main.h"

/**
 * swap_int - Entry Point
 * @a: First Varaible
 * @b: Second Varaible
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
