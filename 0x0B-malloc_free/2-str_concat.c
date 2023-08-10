#include "main.h"

/**
 * str_concat -  function that concatenates two strings.
 * if NULL is passed, treat it as an empty string
 *
 * @s1: string
 * @s2: string
 *
 * Return: The function should return NULL on failure
 * The returned pointer should point to a newly allocated space in memory,
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	int len = (_strlen(s1) + _strlen(s2));
	char *cat = (char *)malloc((sizeof(char) * len) + 1);

	if (cat == NULL)
	{
		return (NULL);
	}
	else
	{
		_strcpy(cat, s1);
		_strcat(cat, s2);
	}

	return (cat);
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
 * _strcat - function appends the src string to the dest string
 *
 * @dest: string
 * @src: string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
