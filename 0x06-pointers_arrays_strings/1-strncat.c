#include "main.h"

/**
 * _strncat - function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: pointer to the destination string
 *
 * @src: pointer to the source string
 *
 * @n: maximum number of characters to be appended from the source string
 *
 * Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
