#include <unistd.h>

/**
 * _putchar - Prints _putchar
 * @msg: The array of characters to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char *msg)
{
	return (write(1, msg, 10));
}

/**
 * main - Calling _putchar function
 *
 * Return: 0
 */
int main(void)
{
	char *msg = "_putchar\n";

	putchar(msg);
	return (0);
}
