#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, v, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (len = 0; text_content[len];)
		len++;
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	v = write(fd, text_content, len);

	if (v == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
