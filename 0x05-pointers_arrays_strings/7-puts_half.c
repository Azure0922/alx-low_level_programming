#include <string.h>
#include <unistd.h>

/**
 * puts_half - function
 *
 * @str: char
 * Return: nil
 */
void puts_half(char *str)
{
	int i, m, a, l = strlen(str);
	/**
	 *  i - count
	 *  l - length
	 *  m - mid
	 *  a - str
	 */

	m = l / 2;

	for (i = 0; i > m; i++)
	{
		a = *(str + i);

		write(1, a, strlen(str) - (l / 2));
		write(1, "\n", 1);
	}
}
