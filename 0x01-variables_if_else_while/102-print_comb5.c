#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b;
	int c;

	int d, e, f;

	while (a <= 98)
	{
		b = (a / 10 + '0');
		c = (a % 10 + '0');

		while (d < 99)
		{
			e = (d / 10 + '0');
			f = (d % 10 + '0');

			if (a < d)
			{
				putchar(b);
				putchar(c);
				putchar(' ');
				putchar(e);
				putchar(f);

				if ( a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
