#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter
 * @array: Integer Array
 * @size: Array Size
 * @action: Pointer to the Function
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
