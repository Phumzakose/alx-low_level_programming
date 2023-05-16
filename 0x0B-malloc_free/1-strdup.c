#include "main.h"
#include <stdlib.h>

/**
 * strSize - return length of a string
 * @s: input
 * Return:  length of string
 */
int strSize(char *s)
{
	int y;

	for (y = 0; *s != '\0'; y++)
		;
	return (y);
}

/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: NULL if str = NULL or pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *c;
	int i;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strSize(str) + 1;
	c = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		if (c == NULL)
		{
			return (NULL);
	}
		c[i] = str[i];
	}
	return (c);
}
