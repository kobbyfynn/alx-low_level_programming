#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 *
 * @s: string
*/

void _print_rev_recursion(char *s);
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(&s[i] + 1);
		_putchar(s[i]);
	}
}
