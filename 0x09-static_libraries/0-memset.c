#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: pointer to char memory
 * @b: value to be filled
 * @n: number of bytes to be filled.
 * Return: Char s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
