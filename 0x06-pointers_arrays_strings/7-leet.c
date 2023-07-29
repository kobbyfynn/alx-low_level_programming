#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @s: string
 *
 * Return: address of string
*/

char *leet(char *s)
{
	int j, i;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
