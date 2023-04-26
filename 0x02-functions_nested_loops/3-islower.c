#include "main.h"
/**
 * _islower - Checks for lowercase character.
 * @p: The character to be checked.
 * Return: 1 for lowercase character or 0 for anything else.
 */
int _islower(int p)
{
	if (p >= 97 && p <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
