#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *Return: void.
 *
 */
void print_alphabet_x10(void)
{

	int j = 0;

	char c;

	for (j = 0; j < 9; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

