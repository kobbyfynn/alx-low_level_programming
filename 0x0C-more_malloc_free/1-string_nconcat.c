#include "main.h"

/**
 * string_nconcat -  function that concatenates two strings.
 * If n is greater or equal to the length of s2 then use the entire string s2.
 * if NULL is passed, treat it as an empty string
 *
 * @s1: string
 * @s2: string
 * @n: bytes
 *
 * Return: The returned pointer shall point to a newly allocated space in mem
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 * If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = (_strlen(s1) + n);
	unsigned int lens2 = _strlen(s2);
	char *all = malloc((sizeof(char) * len) + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (all == NULL)
	{
		return (NULL);
	}
	else if (n >= lens2)
	{
		_strcpy(all, s1);
		_strncat(all, s2, lens2);
	}
	else
	{
		_strcpy(all, s1);
		_strncat(all, s2, n);
	}

	return (all);
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

	if (s == NULL)
	{
		return (1);
	}
	else
	{
		i = 0;
		while (s[i] != '\0')
		{
			i++;
		}
	}

	return (i);
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
