#include <unistd.h>

/**
 * print_number - print
 *
 * @n: integer
 * Return: n
 */
void print_number(int n)
{
	write(1, "%u",sizeof(n));
}
