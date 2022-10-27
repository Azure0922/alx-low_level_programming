#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * rot13 - function
 *
 * @c: char
 * Return: nil
 */
char *rot13(char *c)
{
	int x, l;
	/**
	 * x - count
	 * l - length
	 */

	l = strlen(c);

	for (x = 0; x < l; x++)
	{
		if ((c[x] >= 'a' && c[x] < 'n') || (c[x] >= 'A' && c[x] < 'N'))
		{
			c[x] += 13;
		}
		else if ((c[x] >= 'm' && c[x] < 'z') || (c[x] >= 'M' && c[x] < 'Z'))
		{
			c[x] -= 13;
		}
	}
	return (0);
}
