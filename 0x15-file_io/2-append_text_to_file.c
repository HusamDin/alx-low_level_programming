#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file to be appended
 * @text_content: The content written to a file
 *
 * Return: On success, 1.
 * On failure, -1 is returned.
 */
int append_text_to_file(char *filename, char *file_content)
{
	int fd, chwr, contentLen;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (file_content)
	{
		for (contentLen = 0; file_content[contentLen]; contentLen++)
			;
		chwr = write(fd, file_content, contentLen);

		if (chwr == -1)
			return (-1);
	}

	return (1);

	close(fd);
}
