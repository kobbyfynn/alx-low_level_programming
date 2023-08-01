#include "main.h"

/**
 * _strstr - this function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared.
 *
 * @haystack: string
 * @needle: substring
 *
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
