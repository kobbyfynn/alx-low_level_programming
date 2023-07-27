#include "main.h"

/**
 * _strcmp - function that compares two strings and works exactly like strcmp
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: 0 if the strings are the same. else, the difference between them
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		*s1 = *s1 + 1;
		*s2 = *s2 + 1;
	}
	return (0);
}
