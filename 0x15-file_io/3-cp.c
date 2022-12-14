#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void display(int, char, char *);

/**
 * main - copies the content of a file to another file
 * @ac: The number of command line arguments
 * @av: an array of command line arguments strings
 *
 * Return: On success, 0.
 * On failure,
 *   97 if the number of arguments is not the correct one
 *   98 if file_from does not exist, or if you can not read it
 *   99 if you can not create or if write to file_to fails
 *   100 if you can not close a file descriptor
 */

int main(int ac, char **av)
{
	int src, dest, chwr, bufLen = 1024;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	src = open(av[1], O_RDONLY, 0664);

	if (src == -1)
	{
		display(src, 'R', av[1]);
	}

	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (dest == -1)
	{
		display(dest, 'W', av[2]);
	}

	while (bufLen == 1024)
	{
		bufLen = read(src, buf, sizeof(buf));

		if (bufLen == -1)
		{
			display(src, 'R', av[1]);
		}

		chwr = write(dest, buf, bufLen);

		if (chwr == -1)
		{
			display(dest, 'W', av[2]);
		}
	}

	src = close(src);
	dest = close(dest);

	if (src || dest)
	{
		display(src, 'C', NULL);
	}

	return (0);
}

/**
 * display - displays an error message depending on file mode
 * @fd: The file descriptor
 * @mode: The file mode denoted by its inital
 * @filename: The file name to read from or write to
 *
 * Return: void
 */

void display(int fd, char mode, char *filename)
{
	if (mode == 'R')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W')
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
