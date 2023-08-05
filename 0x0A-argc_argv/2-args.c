#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0 upon success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
