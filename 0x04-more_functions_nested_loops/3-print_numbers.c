#include <unistd.h>

/**
 * print_numbers - print 0 to 9
 */
void print_numbers(void)
{
	write(1, "0123456789\n", 11);
}
