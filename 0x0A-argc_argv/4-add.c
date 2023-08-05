#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: If the program does not receive two arguments, your program
 * should print Error, followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			mul *= atoi(argv[i]);
			printf("%d\n", mul);
		}
	}

	return (mul);
}
