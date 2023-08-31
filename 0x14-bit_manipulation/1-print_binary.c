#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int z;

	for (i = 63; i >= 0; i--)
	{
		z = n >> i;
		if (z & 1)
		{
			_putchar('1');
			j++;
		}
		if (j)
		{
			_putchar('0');
		}
	}

	if (!j)
	{
		_putchar('0');
	}
}
