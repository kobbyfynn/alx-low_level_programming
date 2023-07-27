#include "main.h"

/**
 * _strncpy - function that copies a string and works exactly like strncpy
 *
 * @dest: pointer to destination string
 *
 * @src: pointer to source string
 *
 * @n: maximum number of characters to be copied from the source string
 *
 * Return: pointer to destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

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
