#include "main.h"

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

/**
 * _sqrt_recursion - Main Function
 * @n: Variable
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
