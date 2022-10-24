#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * rev_string - function
 *
 * @s: char
 * Return: nil
 */
void rev_string(char *s)
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
}
