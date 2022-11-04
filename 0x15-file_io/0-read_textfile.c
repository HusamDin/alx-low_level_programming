#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The text file name
 * @letters: The number of letters to read and print
 *
 * Return: On success, file descriptor value
 * On error, -1 is returned.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, int ch_write;
	char *buf;
	ssize_t size;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_CREAT | O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	size = read(fd, buf, letters);

	close(fd);

	if (size == -1)
	{
		free(buf);
		return (0);
	}

	ch_write = write(STDOUT_FILENO, buf, size);

	free(buf);

	if (ch_write == -1)
		return (0);

	return (size);
}
