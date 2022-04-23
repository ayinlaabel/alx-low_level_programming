#include "main.h"

/**
 * reverse_array - Entry Point
 * @a: Variable
 * @n: Length
 * Ruturn: ALways 0
 */

void reverse_array(int *a, int n)
{
	int i = 0, b;

	for (b = n / 2; b > 0; b--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
