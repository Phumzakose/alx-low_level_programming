#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit
 * @n: number
 * Return: 1 if successfull, or -1 if an error
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);

}
