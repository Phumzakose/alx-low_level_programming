#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: number to convert to binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n == 0)
	{
		putchar('0');
		return;
	}
	putchar('0' + (n & 1));
}
