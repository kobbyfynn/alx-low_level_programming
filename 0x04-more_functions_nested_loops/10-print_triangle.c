#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * Use the character # to print the triangle
 *
 * @size:  the size of the triangle
 * If size is 0 or less, the function should print only a new line
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if ((i + j + 1) < size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
