#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int l;

	if (a > b && a > c)
	{
		l = a;
	}
	else if (b > c && b > a)
	{
		l = b;
	}
	else if (c > b)
	{
		l = c;
	}
	else
	{
		l = b;
	}

	return (l);
}
