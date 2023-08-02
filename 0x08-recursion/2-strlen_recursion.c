#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string.
 *
 * @s: string
 *
 * Return: the length
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(&s[i] + 1) + 1);
	}
}
