#include <unistd.h>

/**
 * add - check the code
 *
 * Return: Always 0.
 */
int add(int, int)
{
	int x, y, sum = x + y;
	write(1, sum, sizeof(sum));
}
