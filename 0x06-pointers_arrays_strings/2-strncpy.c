#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _strncpy - function
 *
 * @src: char
 * @dest: char
 * @n: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (0);
}
