#include "main.h"
#include <math.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: is the index, starting from 0 of the bit
 * @n: bit value in the index.
 * Returns: the value of the bit at index index or -1.
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index == 0)
	{
		return (n & 1);
	}
	if (index > 63)
	{
		return (-1);
	}
	return (get_bit(n >> 1, index - 1));
}
