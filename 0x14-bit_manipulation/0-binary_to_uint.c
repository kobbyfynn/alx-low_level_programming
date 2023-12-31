#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number;
 * 0 if there is one or more chars in the string b that is not 0 or 1;
 * 0 if b is null.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		if (*b == '1')
		{
			i += 1;
		}

		i <<= 1;

		b++;
	}

	if (*(b - 1) == '1')
	{
		i += 1;
	}

	return (i >> 1);
}
