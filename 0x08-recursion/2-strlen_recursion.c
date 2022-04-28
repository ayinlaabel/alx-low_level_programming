#include "main.h"

/**
 * _strlen_recursion - Entry Point
 * @s: Variable
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}
