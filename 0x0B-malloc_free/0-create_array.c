#include <stdlib.h>
#include "main.h"

/**
 * create_array -  creates an array of chars.
 * initializes it with a specific char.
 * @size: size of an array
 * @c: char to assign
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
