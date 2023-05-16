#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: NULL if str = NULL or pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *pstr;
	unsigned int i = 0;

	if (str == NULL)
        {
                return (NULL);
        }
	while (str[i] != 0)
	{
		i++;
	}
	i++;
	pstr = malloc(sizeof(char) * i);
	for (i = 0; str[i] != 0; i++)
	{
		pstr[i] = str[i];
	}
	pstr[i] = 0;
	return (pstr);
}
