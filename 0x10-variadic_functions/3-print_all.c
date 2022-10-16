#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	va_list va;

	va_start(va, format);

	while (format[j] != '\0')
	{
		switch(format[j])
		{
		case 'c':
		{
			if (format[j + 1] != '\0')
				printf("%c, ", va_arg(va, int));
			else
				printf("%c", va_arg(va, int));
			j++;
			if (format[j] != '\0')
				continue;
			else
				break;
		}
		case 'i':
		{
			if (format[j + 1] != '\0')
				printf("%i, ", va_arg(va, int));
			else
				printf("%i", va_arg(va, int));
			j++;
			if (format[j] != '\0')
				continue;
			else
				break;
		}
		case 'f':
		{
			if (format[j + 1] != '\0')
				printf("%f, ", va_arg(va, double));
			else
				printf("%f", va_arg(va, double));
			j++;
			if (format[j] != '\0')
				continue;
			else
				break;
		}
		case 's':
		{
			if (format[j + 1] != '\0')
				printf("%s, ", va_arg(va, char *));
			else
				printf("%s", va_arg(va, char *));
			j++;
			if (format[j] != '\0')
				continue;
			else
				break;
		}
		default:
		{
			j++;
			break;
		}
		}
	}
	printf("\n");
	va_end(va);
}
