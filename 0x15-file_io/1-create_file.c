#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - create
 *
 * @filename: char
 * @text_content: char
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, w;
	/**
	 * fd - file desc
	 * i - count
	 * w - write
	 */

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (i = 0; text_content[i];)
	{
		i++;
	}

	w = write(fd, text_content, i);

	if (w == -1)
	{
		return (-1);
	}

	close(fd);

	return (-1);
}
