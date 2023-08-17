#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: an array of intergers
 * @size: size of array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i, start;

	if (array != NULL && action != NULL && size != 0)
	{
		for (start = 0; start < size; start++)
		{
			i = array[start];
			(*action)(i);
		}
	}
}
