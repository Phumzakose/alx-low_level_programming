#include "main.h"
/**
 * *_strcat - appends the src string to the dest string.
 * @dest: char type pointer 1st argument.
 * @src: char type pointer 2nd argument.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
