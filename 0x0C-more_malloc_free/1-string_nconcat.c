#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function
 *
 * @s1: char
 * @s2: char
 * @n: uint
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l;
	/* l - length */

	l = strlen(s2);

	s1 = (char *)malloc(sizeof(*s1) + sizeof(*s2) + (sizeof(unsigned int) * n));

	if (n >= l)
	{
		strcat(s1, s2);
		printf("%s\n", s1);
	}
	else if (n < l)
	{
		strncat(s1, s2, n);
		printf("%s\n", s1);
	}
	else if (s1 == NULL)
	{
		return (NULL);
	}
	return (0);
}
