#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: NULL if str = NULL or pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *c;

	int i = 0, b = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[b])
	{
		b++;
	}
	c = malloc((sizeof(char) * i) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	while (i < b)
	{
		c[i] = str[i];
		i++;
	}
	c[i] = 0;
	return (c);
}
