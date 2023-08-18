#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 *
 * @separator:  string to be printed between the strings
 *
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		if (separator != NULL)
		{
			if (i < n - 1)
			{
				printf("%s", str);
				printf("%s", separator);
			}
			if (i == n - 1)
			{
				printf("%s", str);
			}
		}
	}
	printf("\n");
	va_end(args);
}
