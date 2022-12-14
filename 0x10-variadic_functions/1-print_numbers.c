#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: the number of arguments sent to print_numbers
 *
 * Return: void
 */
void print_numbers(char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(va, int));
		if (separator != NULL)
		{
			printf("%d", va_arg(va, int));
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
}
