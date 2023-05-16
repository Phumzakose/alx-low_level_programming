#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *pstr;
	unsigned int i = 0, j = 0, x, y;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[i] != 0)
	{
		i++;
	}
	while (s2[j] != 0)
	{
		j++;
	}
	j++;
	pstr = malloc(sizeof(char) * (i + j));
	for (x = 0; x < i; x++)
	{
		pstr[i] = s1[i];
	}
	for (y = 0; y < j; i++, y++)
	{
		pstr[i] = s2[j];
	}
	return (pstr);
}
