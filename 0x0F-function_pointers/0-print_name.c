#include <stdio.h>
/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: a function pointer to print name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
