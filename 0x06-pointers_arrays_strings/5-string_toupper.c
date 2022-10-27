#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * string_toupper - function
 *
 * @c: char
 * Return: 0
 */
char *string_toupper(char *c)
{
	int i;
	/* i - count */

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
		else 
		{
			c[i] = c[i];	
		}
	}
	return (c);
}
