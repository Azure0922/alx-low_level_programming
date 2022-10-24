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
	putchar(src);

	return (dest);
}
