#include "main.h"
#include <math.h>

/**
 * clear_bit - clear the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit
 * @n: number input
 * Return: 1 if successful or -1;
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
