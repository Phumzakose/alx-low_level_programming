#include "main.h"

/**
 * puts2 - prints character of a string, starting with the first character.
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
