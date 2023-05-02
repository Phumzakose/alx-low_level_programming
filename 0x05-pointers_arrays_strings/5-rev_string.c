#include "main.h"

/**
 * rev_string - reverses a string..
 * @s: string that will be reversed.
 * Return: nothing.
 */
void rev_string(char *s)
{
	char str;
	int i, j, k;

	k = 0;


	for (i = 0; s[i] != '\0'; i++)
		;
	k = i - 1;
	for (j = 0; j < i / 2; j++)
	{
		str = s[j];
		s[j] = s[k];
		s[k--] = str;
	}
}
