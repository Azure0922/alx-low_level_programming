#include <unistd.h>

/**
 * _isupper - function
 *
 * @c: char
 * Return: 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
