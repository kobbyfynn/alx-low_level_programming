#include "main.h"

/**
 * cap_string -  function that capitalizes all words of a string.
 *
 * @s: string
 *
 * Return: string
*/

char *cap_string(char *s)
{
	int j, i = 0;
	/* j represents whether or not the current character is a start of a new
	 * word */

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '\n' || s[i] == ' ' || s[i] == '\t' || s[i] == '\v')
		{
			j = 1;
		}
		else if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!')
		{
			j = 1;
		}
		else if (s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')')
		{
			j = 1;
		}
		else if (s[i] == '{' || s[i] == '}')
		{
			j = 1;
		}
		else if (j && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
			j = 0;
		}
		else
		{
			j = 0;
		}
	}
	return (s);
}
