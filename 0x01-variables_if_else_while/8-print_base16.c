#include <stdio.h>

/**
 * main - Program entry
 *
 * Return: Always 0
 */

int main(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
