#include <stdlib.h>
#include <stdio.h>

/**
 * op_add- a function that sum two number.
 * @a: integer
 * @b: integer
 *
 * Return: 1 or 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- a function that subtraction two number.
 * @a: integer
 * @b: integer
 *
 * Return: 1 or 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul- a function that multipli two number.
 * @a: integer
 * @b: integer
 *
 * Return: 1 or 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div- a function that divis two number.
 * @a: the tab of integer
 * @b: the number
 *
 * Return: 1 or 0
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
 * op_mod- a function that return the modulo of two number.
 * @a: integer
 * @b: integer
 *
 * Return: 1 or 0
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

