#include "main.h"
#include "stdio.h"

/**
 * sqrt1 - calculates the squareroot
 * @a: number to calculate the square root
 * @b: number that iterates from 1 to n
 * Return: The natural square root
 */
int sqrt1(int a, int b)
{
	int squareroot = b * b;

	if (squareroot > a)
	{
		return (-1);
	}
	else if (squareroot == a)
	{
		return (b);
	}
	else
	{
		return (sqrt1(a, b + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 * Return: the natural square root.
 */
int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}
