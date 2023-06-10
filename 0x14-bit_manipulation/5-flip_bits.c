#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number or another.
 * @n: input1
 * @m: input2
 * Returns: number of flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0, bit1, bit2;


	while (!(n == 0 && m == 0))
	{
		bit1 = n & 1;
		bit2 = m & 1;

		n = n >> 1;
		m = m >> 1;
		if (bit1 != bit2)
		{
			flips += 1;
		}
	}
	return (flips);
}
