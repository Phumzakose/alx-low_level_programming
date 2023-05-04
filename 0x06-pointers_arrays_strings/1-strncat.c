#include "main.h"
/**
 * *_strncat - appends the src string to the dest string.
 * @dest: char type pointer 1st argument.
 * @src: char type pointer 2nd argument.
 * @n: number of char to be copied.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
