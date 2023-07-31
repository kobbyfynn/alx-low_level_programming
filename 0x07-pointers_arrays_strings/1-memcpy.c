#include "main.h"

/**
 * _memcpy - this function copies n bytes from memory area src to
 * memory area dest
 *
 * @dest: destination mem area
 * @src: source mem area
 * @n: The number of bytes to be copied.
 *
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
