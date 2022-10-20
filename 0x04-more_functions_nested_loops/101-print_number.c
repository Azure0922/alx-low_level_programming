#include <unistd.h>

/**
 * print_number - print
 *
 * @n: integer
 * Return: n
 */
void print_number(int n)
{
	write(fd, &n, sizeof(int));
	/* fd - file descriptor */
}
