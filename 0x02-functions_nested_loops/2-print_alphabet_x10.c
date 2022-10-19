#include <unistd.h>

/**
 * print_alphabet_x10 - check code
 *
 * Return: 0, success
 */
void print_alphabet_x10(void)
{
	int i = '0';

	while (i <= '9')
	{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	}
	i++;
}
