#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function
 *
 * @s1: char
 * @s2: char
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	/**
	 * i - int
	 * j - int
	 */

	i = strlen(s1);
	j = strlen(s2);

	s1 = (char *)malloc(sizeof(char) * (i + j));

	strcat(s1, s2);

	if (s1 == NULL)
	{
		return (s2);
	}
	else if (s1 == NULL)
	{
		return (s2);
	}
	else if (s2 == NULL)
	{
		return (s1);
	}
	else
	{
		printf("%s", s1);
	}
	free(s1);
	return (0);
}
