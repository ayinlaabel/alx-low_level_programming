#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 * Return: nothing
 */
void print_alphabet_x10(void)
{

	int ch, counter;
	while (counter <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
