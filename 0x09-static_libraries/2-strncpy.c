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
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
