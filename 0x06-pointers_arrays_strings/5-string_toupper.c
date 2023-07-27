#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase.
 *
 * @s: string
 *
 * Return: the string
*/

char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
	}
	return (s);
}
