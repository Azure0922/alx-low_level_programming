#include <unistd.h>

/**
 * print_alphabet_x10 - check code
 *
 * Return: 0, success
 */
void print_alphabet_x10(void)
{
	i = 0;
	/**
	 * i - number of lines
	 */

	while (i < 10)
	{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
		i++;
	}

}
