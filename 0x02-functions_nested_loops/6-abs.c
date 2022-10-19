#include <unistd.h>

int _abs(int);

/**
 * _abs - absolute value
 *
 * Return: 0, success
 */
int _abs(int)
{
	int n;
	int r = abs(n);

	write(1, "%d", sizeof(r));
}	

