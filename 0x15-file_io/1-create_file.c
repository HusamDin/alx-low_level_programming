#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: The name of the file to be created
 * @text_content: The content to write to the file
 *
 * Return: On success, 1.
 * On failure, -1 is returned.
 */
int create_file(char *filename, char *text_content)
{
	int fd, wrLen, contentLen;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (fd);

	for (contentLen = 0; text_Content[contentLen]; contentLen++);

	if (text_content == NULL)
		wrLen = write(fd, "", contentLen);
	else
		wrLen = write(fd, text_content, contentLen);

	close(fd);

	if (wrLen == -1)
		return (wrLen);

	return (1);
}
