#include <unistd.h>

/**
 * _islower - check code
 *
 * Return: 1
 */
int _islower(int c)
{
	int c;
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
