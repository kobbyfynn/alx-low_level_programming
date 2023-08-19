#include "variadic_functions.h"

/**
 * print_all -  function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *str;
	va_list args;

	va_start(args, format);
	while (format != NULL && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				j = 0;
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				j = 0;
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s", str);
				j = 0;
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] && j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
