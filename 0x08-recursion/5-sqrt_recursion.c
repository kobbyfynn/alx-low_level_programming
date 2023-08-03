#include "main.h"

/**
 * is_square - checks if a number has a natural square root
 *
 * @i: square root of number
 * @j: i squared
 *
 * Return: in _sqrt_recursion
*/

int is_square(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (is_square(i + 1, j));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: num
 *
 * Return: if n doesn't have natural square root,the function should return -1
 * as shown in is_square
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (is_square(1, n));
	}
}
