#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * it locates the first occurrence in the string s of any of the bytes
 * in the string accept
 *
 * @s: string
 * @accept: string
 *
 * Return:  a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
