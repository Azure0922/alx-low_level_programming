#include <unistd.h>

/**
 * _isalpha - check code
 *
 * @c: char
 * Return: 1
 */
int _isalpha(int c)
{
	/* c - char */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
		write(1, "%c", 1);
	}
	else
	{
		return (0);
	}
}
