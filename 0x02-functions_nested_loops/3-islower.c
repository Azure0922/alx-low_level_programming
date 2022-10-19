#include <unistd.h>

/**
 * _islower - check code
 *
 * c - char
 * Return: 1, success
 */
int _islower(int c)
{
	/* c - char */
	if (c <= 'z' && c >= 'a')
	{
		return (1);
		write(1, "1", 1);
	}
	else
	{
		return (0);
	}
}
