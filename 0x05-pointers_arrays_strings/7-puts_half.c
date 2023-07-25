#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * @str: string
*/

void puts_half(char *str)
{
	int len, n;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 != 0)
		{
			n = (len - 1) / 2;
		}
		else
		{
			n = len / 2;
		}
	}

	for (len = n + 1; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}

	_putchar('\n');
}
