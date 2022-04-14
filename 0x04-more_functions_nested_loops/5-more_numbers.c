#include "main.h"

/**
 * more_numbers - entry point
 * Return: always 0
 */

void more_numbers(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar('0' + a);
		}

		_putchar('\n');
	}
}
