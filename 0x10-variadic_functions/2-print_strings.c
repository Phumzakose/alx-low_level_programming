#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *ptr;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", ptr);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(list);
}
