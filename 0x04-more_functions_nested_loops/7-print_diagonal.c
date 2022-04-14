#include "main.h"

/**
 * print_diagonal - entry point
 * @n: number
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0, a;

	while (i < n && n > 0)
	{
		a = 0;
		while (a < i)
		{
			_putchar(' ');
			a++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
