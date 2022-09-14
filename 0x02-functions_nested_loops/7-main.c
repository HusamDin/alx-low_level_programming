#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{



    int r;

    int n = INT_MIN;

    print_last_digit(98);
    print_last_digit(0);
    print_last_digit(INT_MIN);
    r = print_last_digit(-1024);
    _putchar(48 + r);
    _putchar('\n');
    if (n > 0 || n == 0)
	    printf("%d\n", n*-1);
    else
	    printf("Hello, World\n");
    printf("%d\n", n*-1);
    printf("%d\n", n);
    return (0);
}
