#include "main.h"

/**
 * checkLength - obtains length of a
 * @a: string
 * Return: the length of a string
 */
int checkLength(char *a)
{
	if (*a == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + checkLength(a + 1));
	}
}
/**
 * checkStr - compares the strings
 * @a: string
 * @b: iterator
 * @c: another iterator
 * Return: On success 1 and -1 on error
 */
int checkStr(char *a, int b, int c)
{
	if (*(a + b) == *(a + c))
	{
		if (b == c || b == c + 1)
			return (1);
		return (0 + checkStr(a, b + 1, c - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string to evaluate
 * Return: On success 1 and -1 on error
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checkStr(s, 0, checkLength(s) - 1));
}
