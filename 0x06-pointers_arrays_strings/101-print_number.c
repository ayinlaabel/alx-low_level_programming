#include "main.h"

/**
 * print_number - Entry Point
 * @n: Variable
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int a, b, c;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	b = a;
	c = 1;

	while (y > 9)
	{
		y /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((x / c) % 10) + 48);
	}
}
