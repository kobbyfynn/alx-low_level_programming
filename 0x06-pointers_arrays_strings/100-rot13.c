#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 *
 * @s: string
 *
 * Return: address of string
*/

char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = b[j];
				break;
			}
		}
	}

	return (s);
}
