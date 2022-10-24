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
	int i, k, l, m, n;
	/**
	 * i - count
	 * k - temp
	 * l - length
	 * m - store
	 * n - store 2
	 */

	l = strlen(s);
	m = 0;
	n = l - 1;

	for (i = m; i < n; i++)
	{
		k = s[i];
		s[i] = s[n];
		s[n] = k;
		n--;
	}
	write(1, "\n", 1);
}
