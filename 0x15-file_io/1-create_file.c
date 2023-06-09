#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer tp a string to write to the file
 *
 * Return: if the function fails - -1.
 * otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, v, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

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
