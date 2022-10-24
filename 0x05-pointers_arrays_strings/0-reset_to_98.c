#include <unistd.h>

/**
 * reset_to_98 - function
 * 
 * @n: pointer
 * Return: 0
 */
void reset_to_98(int *n)
{
	int p = 0;
	/* p - int */

	*n = &p;

	*n = 98;
}
