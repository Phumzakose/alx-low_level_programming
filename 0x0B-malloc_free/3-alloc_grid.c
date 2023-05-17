#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creates 2D array of ints
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: pointer to 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int j, k;
	int **arr1;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arr1 = malloc(sizeof(int *) * height);
	if (arr1 == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < height)
	{
		arr1[j] = malloc(sizeof(int) * width);
		if (arr1[j] == NULL)
		{
			for (--j; j >= 0; j--)
			{
				free(arr1[j]);
			}
			free(arr1);
			return (NULL);
		}
		j++;
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			arr1[j][k] = 0;
		}
	}
	return (arr1);
}
