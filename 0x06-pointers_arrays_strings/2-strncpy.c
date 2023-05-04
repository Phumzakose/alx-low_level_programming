#include "main.h"
/**
 * *_strncpy - appends the src string to the dest string.
 * @dest: char type pointer 1st argument.
 * @src: char type pointer 2nd argument.
 * @n: number of char to be copied.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
