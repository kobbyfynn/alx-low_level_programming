#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * The _calloc function allocates memory for an array of nmemb elements of
 * size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero.
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int tm;
	char *am;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	tm = nmemb * size;
	am = malloc(tm);/* allocated mem*/
	if (am == NULL)
	{
		return (NULL);
	}
	else
	{
		_memset(am, 0, tm);
	}
	return (am);
}

/**
 * _memset -  function fills the first n bytes of the mem area pointed to by
 *  s with the constant byte b
 *
 *  @s: memory area
 *  @b:constant byte
 *  @n: int
 *
 *  Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
