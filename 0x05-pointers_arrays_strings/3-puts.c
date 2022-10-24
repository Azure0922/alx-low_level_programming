#include <unistd.h>

/**
 * _puts - function
 *
 * @*str: char
 * Return: 0
 */
void _puts(char *str)
{
	fwrite(str, sizeof(char), sizeof(str) - 1, stdout);
}
