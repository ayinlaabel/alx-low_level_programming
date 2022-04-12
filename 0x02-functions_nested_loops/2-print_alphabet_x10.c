#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 * Return: nothing
 */
void print_alphabet_x10(void)
{

	int ch, counter = 0;

	while (counter <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		counter++;
		_putchar('\n');
	}

}
