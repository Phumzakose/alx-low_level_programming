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
	char *c;
	int a = 0, b = 0, i, j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[a] != 0)
		a++;
	while (s2[b] != 0)
		b++;
	b++;
	c = malloc(sizeof(char) * (a + b));
	for (i = 0; i < a; i++)
	{
		c[i] = s1[i];
	}
	for (j = 0; j < b; i++, j++)
	{
		c[i] = s2[j];
	}
	return (c);
}
