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
	int i, m, l = strlen(str);
	/**
	 *  i - count
	 *  l - length
	 *  m - mid
	 */

	m = l / 2;

	for (i = 0; i > m; i++)
	{
		write(1, str, strlen(str / 2));
	}
}