#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _memset - function
 *
 * @s: char
 * @b: char
 * @n: int
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	printf("%s", s);

	returnn (0);
}
