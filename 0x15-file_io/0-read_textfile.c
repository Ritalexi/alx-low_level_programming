#include "main.h"

/**
 * read_textfile - Entry point
 * @filename: pointer to filename
 * @letters: number of letters it should read and print
 * Return: Always 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, j;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, 0_RDONLY);

	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	i = read(fd, but, letters);

	if (i < 0)
	{
		free(buf);
		return (0);
	}

	buf[i] = '\0';
	close(fd);
	j = write(STDOUT_FILENO, buf, i);
	if (j < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (j);
}
