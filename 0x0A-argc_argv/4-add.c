#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  program that adds positive numbers.
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int i, j;
	int add = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					{
						return (1);
					}
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}

	return (0);
}
