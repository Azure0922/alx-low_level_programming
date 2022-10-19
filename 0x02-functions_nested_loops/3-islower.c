#include <unistd.h>

/**
 * _islower - check code
 *
 * Return: 1
 */
int _islower(int c)
{
	int c;

	if (c <= 'z' && c >= 'a')
	{
		write(1, c, sizeof(c));
		return (1);
	}
	else
	{
		return (0);
	}
}
