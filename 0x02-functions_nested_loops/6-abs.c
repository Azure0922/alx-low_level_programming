#include <unistd.h>
#include <stdlib.h>

/**
 * _abs - absolute value
 * n - integer
 *
 * Return: 0, success
 */
int _abs(int n)
{
	int r = abs(n);
	/* r - absolute value */

	write(1, "%d", sizeof(r));

	return (0);
}	

