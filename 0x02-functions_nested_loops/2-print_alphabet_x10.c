#include <unistd.h>

/**
 * print_alphabet_x10 - check code
 *
 * Return: 0, success
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i <= 9; i++)
	{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	}
}
