#include "main.h"

/**
 * _strdup - function that returns pointer to a newly allocated space in mem
 * which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated str.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int len = _strlen(str);
	char *dup = (char *)malloc((sizeof(char) * len) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	else if (dup == NULL)
	{
		return (NULL);
	}
	else
	{
		_strcpy(dup, str);
	}

	return (dup);

}

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

	/*putchar('\n');*/
}

/**
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0) to the buffer pointed to by dest.
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
