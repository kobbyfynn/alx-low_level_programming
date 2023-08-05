#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 upon success.
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
