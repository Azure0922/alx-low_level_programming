#include <unistd.h>

/**
 * puts2 - function
 *
 * @str: char
 * Return: nil
 */
void puts2(char *str)
{
	while (*str)
	{
		int i, j;
		/**
		 * i - int
		 * j - int
		 */

		for (i = 0; i % 2 == 0; i++;)
		{
			odd[j++] = *str;
		}
		str++;
	}
}
