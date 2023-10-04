#include <stdlib.h>

/**
  * alloc_grid - allocates memory for a 2D array of integers
  * @width: width of array
  * @height: height of array.
  * Return: Pointer to 2D array.
  *         Null if memory fails, width, height is 0 or -ve.
  */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (0);

	ptr = (int **)malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));


		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}

			free(ptr);
			return (0);
		}


		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
