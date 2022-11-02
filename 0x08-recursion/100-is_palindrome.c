#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * is_palindrome - function
 *
 * @s: char
 * Return: 0
 */
int is_palindrome(char *s)
{
	int i, l;
	/**
	 * i - int
	 * l - strlen
	 */

	l = strlen(s);

	i = 0;

	while (i < l)
	{
		if ((s[i] == s[l - i - 1]))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
