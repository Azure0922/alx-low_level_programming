#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * puts2 - function
 *
 * @str: char
 * Return: nil
 */
void puts2(char *str)
{
	int i, m;
	/**
	 * i - count
	 * m - length
	 */

	m = strlen(str);

	for (i = 0; i < m; i += 2)
	{
		write(1, str, m / 2);
	}
}
