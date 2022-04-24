#include "main.h"

/**
 * print_number - Entry Point
 * @n: Variable
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int a, b;
	int c = 0, d = 1, e;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		n++;
	}

	a = n;
	b = n;

	while (b > 0)
	{
		b /= 10;
		c++;
	}

	for (e = 0; e < c; e++)
	{
		d *= 10;
	}
	for (e = 0; e < c; e++)
	{
		_putchar((a / d) + '0');
		a = a % d;
		d /= 10;
	}
}
