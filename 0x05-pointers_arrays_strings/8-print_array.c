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
	for (n = 0; n <= 4; n++)
	{
		if (n < 4)
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
