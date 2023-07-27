#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: pointer to an array
 *
 * @n: number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int end, start, i;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		i = a[start];
		a[start] = a[end];
		a[end] = i;
		start++;
		end--;
	}
}
