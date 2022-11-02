#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _print_rev_recursion - function
 *
 * @s: char
 * Return: nil
 */
void _print_rev_recursion(char *s)
{
	int l, m, n, p;
	/**
	 * l - length
	 * m - string
	 * n - count
	 */

	l = strlen(s);

	p = l / 2;

	for (n = 0; n < p; n++)
	{
		m = s[n];
		s[n] = s[l - n - 1];
		s[l - n - 1] = m;
	}
}
