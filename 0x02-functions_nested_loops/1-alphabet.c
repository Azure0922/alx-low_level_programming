#include <unistd.h>

/**
 * print_alphabet - check code
 *
 * Return: 0, success
 */
void print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 28);
}
