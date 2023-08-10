#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 *
 * @b: memory to be allocated
 *
 * Return: function that allocates memory using malloc.
 */
void *malloc_checked(unsigned int b)
{
	size_t *am = malloc(sizeof(*am) * b);

	if (am == NULL)
	{
		exit(98);
	}

	return (am);
}
