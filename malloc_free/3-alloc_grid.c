#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (height < 1 || width < 1)
	{
		free(arr);
		return (NULL);
	}

	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
