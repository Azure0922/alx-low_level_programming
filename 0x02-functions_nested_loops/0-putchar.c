#include <unistd.h>

/**
 * _putchar - print
 *
 * Return: always 0
 */
int _putchar(int c)
{
	write(1, "_putchar\n", 10);
	return (0);
}
