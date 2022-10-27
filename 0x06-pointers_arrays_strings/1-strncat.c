#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _strncat - function
 *
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	write(1, dest, strlen(dest));

	return (0);
}
