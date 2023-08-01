#include "main.h"

/**
 *  _strspn - function that gets the length of a prefix substring.
 *  works like strspn standard library function
 *
 *  @s: string
 *  @accept: substring
 *
 *  Return:  the number of bytes in the initial segment of s which
 *  consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				continue;
			}
		}
		return (j + 1);
	}

	return (0);
}
