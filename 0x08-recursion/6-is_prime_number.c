#include "main.h"

/**
 * primeNumber - Finds the prime numbers
 * @x: the number to be checked
 * @y: number that iterates
 * Return: return 1 if successful
 */
int primeNumber(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	else
	{
		return (primeNumber(x, y + 1));
	}
}

/**
 * is_prime_number - checks if the passed number is prime.
 * @n: number to be checked.
 * Return: 1 if successful
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (primeNumber(n, 2));
	}
}

