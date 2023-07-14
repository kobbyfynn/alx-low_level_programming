#include <stdio.h>

/**
 *  * main - Program entry
 *   *
 *    * Return: Always 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j < '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '1'; l <= '9'; l++)
				{
					if (i + j < k + l)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i + j + k + l != '5' * '7')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
