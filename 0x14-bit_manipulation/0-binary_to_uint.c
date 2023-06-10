#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 * -> there is one or more chars in the string b that is not 0 or 1
 * -> b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num = num << 1;
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		else if (b[i] == '1')
		{
			num = num | 1;
		}
	}
	return (num);
}
