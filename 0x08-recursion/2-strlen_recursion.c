#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: 1 on success
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	else
	{
		return (0);
	}
}
