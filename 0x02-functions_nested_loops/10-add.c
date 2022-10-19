#include <unistd.h>

/**
 * add - check the code
 *
 * @x: integer
 * @y: int 2
 * Return: Always 0.
 */
int add(int x, int y)
{
	int sum = x + y;

	return (sum);
	write(1, &sum, sizeof(sum));
}
