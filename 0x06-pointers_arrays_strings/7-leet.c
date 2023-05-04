#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @n: an input string to encode
 * Return: An encode string
 */
char *leet(char *n)
{
	int i = 0, j;
	char s1[] = "4433007711";
	char s2[] = "aAeEoOtTlL";

	for (i = 0; n[i] != '0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s2[j])
				n[i] = s1[j];
		}
	}

	return (n);
}
