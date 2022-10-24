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
	int i, k;
	/**
	 * i - count
	 * k - temp
	 */

	k = strlen(s) - 1;

	for (i = k; i >= n; i--)
	{
		write(1, i, strlen(s));
	}
	write(1, "\n", 1);
}
