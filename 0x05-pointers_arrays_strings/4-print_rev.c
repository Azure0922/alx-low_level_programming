#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * print_rev - function
 *
 * @s: char
 * Return: 0
 */
void print_rev(char *s)
{
	int i, l, m;
	/**
	 * i - count
	 * l - length
	 * m - store
	 */

	for (i = 0; i < l/2; i++)
	{
		m = s[i];
		s[i] = s[l-i-1];
		s[l-i-1] = m;
	}
	write(1, "\n", 1);
}
