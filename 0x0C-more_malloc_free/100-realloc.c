#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated
 *
 * @old_size: the size, in bytes, of the allocated space for ptr
 *
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to reallocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	/*prev alloc mem*/
	char *pam = ptr;
	/*realloc mem*/
	char *rm = malloc(new_size);

	if (ptr == NULL)
	{
		return (rm);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	if (rm == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0 ; i < old_size ; i++)
		{
			rm[i] = pam[i];
		}
	}

	free(ptr);
	return (rm);
}
