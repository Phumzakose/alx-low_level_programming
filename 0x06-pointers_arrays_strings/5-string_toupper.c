#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a  string to upper case.
 * @n: an input string
 * Return: char pointer to converted string
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] -= 32;
		i++;
	}
	return (n);
}
