#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Nested loop.
* @width: input.
* @length: input.
* Return: Pointer.
*/

int **alloc_grid(int width, int height)
{
	int **j;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	j = malloc(sizeof(int *) * height);
	if (j == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		j[x] = malloc(sizeof(int) * width);
		if (j[x] == NULL)
		{
			for (; x >= 0; x--)
				free(j[x]);
			free(j);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			j[x][y] = 0;
	}
	return (j);
}
