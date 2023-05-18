#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings.
  * @s1: first input pointer
  * @s2: second input pointer
  * @n: input integer
  * Return:Nnewly allocated space in memory
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a = 0, b = 0, c = 0, d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (c = 0; s2[c] != '\0'; c++)
		;
	if (n > c)
		n = c;
	else
		d = a + n;

	ptr = malloc(sizeof(char) * d + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	c = 0;
	while (b < d)
	{
		if (b <= a)
		{
			ptr[b] = s1[b];
		}

		if (b >= a)
		{
			ptr[b] = s2[c];
			c++;
		}
		b++;
	}
	ptr[b] = '\0';
	return (ptr);
}
