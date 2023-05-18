#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 * Return: Null or 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, k;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	k = nmemb * size;

	ptr = malloc(k);

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < k)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
