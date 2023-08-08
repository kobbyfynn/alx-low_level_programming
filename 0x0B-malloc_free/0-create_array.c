#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of array
 * @c: character
 *
 * Return: NULL if size = 0;  a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *a = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	else if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
	}
	return (a);
}
