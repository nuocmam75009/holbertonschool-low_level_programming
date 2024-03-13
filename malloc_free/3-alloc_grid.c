#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a 2 dimensional array of ints
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL if failure
 * or pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **pyeol;
	int height_idx;
	int width_idx;

	if (width <= 0 || height <= 0)
		return (NULL);

	pyeol = malloc(sizeof(int) * height);

	if (pyeol == NULL)
		return (NULL);

	for (height_idx = 0; height_idx < height; height_idx++)
	{
		pyeol[height_idx] = malloc(sizeof(int) * width);

		if (pyeol[height_idx] == NULL)
		{
			for (; height_idx >= 0; height_idx--)
				free(pyeol[height_idx]);

			free(pyeol);
			return (NULL);
		}
	}

	for (height_idx = 0; height_idx < height; height_idx++)
	{
		for (width_idx = 0; width_idx < width; width_idx++)
			pyeol[height_idx][width_idx] = 0;
	}

	return (pyeol);
}
