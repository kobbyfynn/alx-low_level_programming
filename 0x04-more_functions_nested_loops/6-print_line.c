#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * If n is 0 or less, the function should only print \n
 *
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
