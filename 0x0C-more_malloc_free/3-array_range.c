#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * The array created should contain all the values
 * from min (included) to max (included), ordered from min to max
 *
 * @min: minimun number in range
 *
 * @max: maximum number in range
 *
 * Return:  the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i;
	/*array size*/
	int as;
	/*allocated memory*/
	int *am;

	if (min > max)
	{
		return (NULL);
	}

	as = ((max - min) + 1);
	am = malloc(sizeof(int) * as);
	if (am == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < as; i++)
	{
		am[i] = min + i;
	}


	return (am);
}
