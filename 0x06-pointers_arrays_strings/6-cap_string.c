#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		for (j = 0; j <= 12; j++)
		{
			if (str[i - 1] == a[j])
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
