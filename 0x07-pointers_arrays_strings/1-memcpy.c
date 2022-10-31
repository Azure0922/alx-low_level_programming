#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _memcpy - function
 *
 * @dest: char
 * @src: char
 * @n: int
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	printf("%s", dest);

	return (0);
}
