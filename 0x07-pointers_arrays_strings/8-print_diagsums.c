#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of 2 diagonals
 * of a square matrix of integers.
 * @a: array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0, sum2  = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + i * size + i);
		sum2 += sum2 + *(a + i * size - i);
	}

	printf("%ld, %ld\n", sum1, sum2);
}
