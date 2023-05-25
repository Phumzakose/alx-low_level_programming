#include "3-calc.h"

/**
 * op_add - adds two values
 * @a: first value
 * @b: second value
 * Return: the sum of the values
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two values
 * @a: first value
 * @b: second value
 * Return: the difference between two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies the two values
 * @a: first value
 * @b: second value
 * Return: the sum of multiplied values
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the values
 * @a: first number.
 * @b: second number.
 * Return: the answer from division.
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
 * op_mod - calculates the remainder from the values.
 * @a: first value
 * @b: second value
 * Return: remainder from the division.
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
