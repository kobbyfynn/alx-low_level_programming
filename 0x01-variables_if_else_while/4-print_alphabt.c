#include <stdio.h>

/**
 *  * main - Program entry
 *   *
 *    * Return: Always 0
 */

int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
