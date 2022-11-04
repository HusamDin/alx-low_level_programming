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

	contentLen = strlen(text_content);

	if (text_content == NULL)
		wrLen = write(fd, "", 0);
	else
		wrLen = write(fd, text_content, contentLen);




	if (wrLen == -1)
		return (wrLen);

	close(fd);

	return (1);
}
