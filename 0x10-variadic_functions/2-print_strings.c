#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings -  prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 *Return: void
 */
void print_strings(char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	char *str;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(va, char *);
			if (str)
				printf("%s", str);
			else
				printf("%s", "(nil)");
			if (i != n - 1)
				if (separator)
					printf("%s", separator);
	}
	printf("\n");
	va_end(va);
}
