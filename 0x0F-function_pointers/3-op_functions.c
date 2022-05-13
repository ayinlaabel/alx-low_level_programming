#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: 1st Num
 * @b: 2nd Num
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers
 * @a: 1st Num
 * @b 2nd Num
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: 1st Num
 * @b: 2nd Num
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides  two number
 * @a: 1st Num
 * @b: 2nd Num
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Modules of two numbers
 * @a: 1st Num
 * @b: 2nd Num
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
