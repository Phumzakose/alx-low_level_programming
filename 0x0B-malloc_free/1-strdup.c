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
	unsigned int i;

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	c = malloc(sizeof(char) * i);
	for (i = 0; str[i] != 0; i++)
	{
		c[i] = str[i];
	}
	c[i] = 0;
	return (c);
}
