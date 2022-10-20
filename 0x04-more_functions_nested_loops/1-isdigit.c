#include <unistd.h>

/**
 * _isdigit - function
 *
 * @c: char
 * Return: 1
 */
int _isdigit(int c)
{
	if (c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
