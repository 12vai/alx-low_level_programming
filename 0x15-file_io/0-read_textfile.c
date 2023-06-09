#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: W- actual number of bytes resd and printed
 * 0 when  function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t v;
	ssize_t c;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	c = read(fd, buf, letters);
	v = write(STDOUT_FILENO, buf, c);

	free(buf);
	close(fd);
	return (v);
}


