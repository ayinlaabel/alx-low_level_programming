#include "main.h"

/**
 * print_numbers - Entry Point
 * Return: always 0
 */

void print_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
