#include "main.h"

/**
 * print_array -  function that prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: array to be printed
 *
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i < (n - 1))
		{
			printf("%d, ", *a++);
		}
		else
		{
			printf("%d", *a++);
		}
	}
	printf("\n");
}
