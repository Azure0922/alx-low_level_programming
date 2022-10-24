#include <unistd.h>
#include <string.h>

/**
 * _strcpy - function
 *
 * @dest: dest
 * @src: src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(src, dest);
	write(1, src, strlen(src));

	return (dest);
}
