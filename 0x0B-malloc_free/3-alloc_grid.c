#include "main.h"

/**
 * alloc_grid - function that takes the width and height of the 2D grid.
 *
 * @width: also column
 * @height: also rows
 *
 * Return: If either the width or height is non-positive,
 * it returns NULL indicating an invalid input.
 * Otherwise, it calls the multi function to allocate memory for the grid and
 * then returns the allocated grid.
 */
int **alloc_grid(int width, int height)
{

	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = multi(height, width);

	return (grid);
}

/**
 * multi - function that allocates memory for a 2D array.
 *
 * @r: rows of array
 * @c: columns of array
 *
 * Return: NULL if allocation fails; the array if allocation is successful.
 */
int **multi(int r, int c)
{
	int i, j;
	int **a = (int **)malloc(sizeof(int *) * r);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < r; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * c);
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}

		for (j = 0; j < c; j++)
		{
			a[i][j] = 0;
		}
	}

	return (a);
}
