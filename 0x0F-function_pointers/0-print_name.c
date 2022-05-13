#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: input
 * @f: function pointer
 * Return: Always return 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
