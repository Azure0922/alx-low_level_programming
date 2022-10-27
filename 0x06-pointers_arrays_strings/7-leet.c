#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * leet - function
 *
 * @c: char
 * Return: 0
 */
char *leet(char *c)
{
	int i = 0, l;
	/**
	 * i - count
	 * l - length
	 */

	l = strlen(c);

	for (i = 0; i < l; i++)
	{
		if (c[i] = 'a' || c[i] = 'A')
		{
			c[i] = '4';
		}
		else if (c[i] = 'e' || c[i] = 'E')
		{
			c[i] = '3';
		}
		else if (c[i] = 'o' || c[i] = 'O')
		{
			c[i] = '0';
		}
		else if (c[i] = 'l' || c[i] = 'L')
		{
			c[i] = '1';
		}
		else if (c[i] = 't' || c[i] = 'T')
		{
			c[i] = '7';
		}
		else
		{
			c[i] = c[i];
		}
	}
		return (0);
}
