#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min value.
 * @max: max value.
 * Return: Pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
