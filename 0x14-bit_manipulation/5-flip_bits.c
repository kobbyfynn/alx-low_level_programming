#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: number 1
 *
 * @m: number 2
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, j = 0;
	unsigned long int a = n ^ m;
	unsigned long int b = 1;

	for (i = 0 ; i < 64 ; i++)
	{
		if (b == (a & b))
		{
			j++;
		}

		b <<= 1;
	}

	return (j);
}
