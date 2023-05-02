#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: first pointer.
 * @b: second pointer.
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
