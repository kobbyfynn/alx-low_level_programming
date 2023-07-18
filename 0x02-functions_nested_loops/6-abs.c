#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @i: the integer to be computed
 *
 * Return: the absolute value
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * (-1));
	}
	else
	{
		return (i);
	}
	_putchar('\n');
}
