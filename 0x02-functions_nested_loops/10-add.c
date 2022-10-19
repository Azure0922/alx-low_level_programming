#include <unistd.h>

/**
 * add - check the code
 *
 * Return: Always 0.
 */
int add(int x, int y)
{
	int sum = x + y;
	write(1, "%d", sizeof(sum));
}
