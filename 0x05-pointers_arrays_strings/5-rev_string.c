#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: string
 */

void rev_string(char *s)
{
	int len, start, end;
	char i;

	for (len = 0; s[len] != '\0'; len++)
	{
		continue;
	}

	start = 0;
	end = len - 1;

	while (start < end)
	{
		i = s[start];
		s[start] = s[end];
		s[end] = i;
		start++;
		end--;
	}

}
