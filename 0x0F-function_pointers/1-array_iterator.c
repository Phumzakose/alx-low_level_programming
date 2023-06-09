#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: input integer array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
