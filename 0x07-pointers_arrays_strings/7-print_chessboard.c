#include "main.h"

/**
 * print_chessboard - Entry Point
 * @a: Variable
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (a = 0; a < 8; a++)
		{
			_putchar(a[i][a]);
		}
		_putchar('\n');
	}
}
