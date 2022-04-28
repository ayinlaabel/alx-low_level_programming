#include "main.h"

/**
 * _sqrt_recursion - Entry Point
 * @n: Variable
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_rescursion (Entry Point)
 * @n: Variable
 * @i: Variable
 * Return: _sqrt
 */

int _sqrt(int n, int i)
{
	if (n < i)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}
