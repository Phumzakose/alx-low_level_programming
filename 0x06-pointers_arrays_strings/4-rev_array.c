#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: an array of integers
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;

		i++;
	}
}
