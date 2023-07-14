#include <stdio.h>

/**
 * main - Program entry
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);

		if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}

		i++;
	}

	putchar('\n');

	return (0);
}
