#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - function
 *
 * @filename: char
 * @letters: char
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	/* fd - file descriptor */

	ssize_t r, w;
	/**
	 * r - r
	 * w - w
	 */

	char *m;
	/* m - malloc */

	if (!filename)
	{
		return (0);
	}

	m = malloc(sizeof(char) * letters);

	if (!m)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	r = read(fd, m, letters);

	close(fd);

	w = write(STDOUT_FILENO, m, r);

	free(m);

	return (w);
}
