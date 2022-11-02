#include <stdio.h>
#include <unistd.h>

/**
 * _pow_recursion - function
 *
 * @x: int
 * @y: int
 * Return: 0, success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1)
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return ((x * _pow_recursion(x, y - 1)));
		}
	}
	return (0);
}
