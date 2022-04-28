#include "main.h"

/**
 * _strlen_recursion - Entry Point
 * @s: Variable
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (!s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
