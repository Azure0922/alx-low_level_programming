#include <unistd.h>

/**
 * reset_to_98 - function
 * 
 * @n: pointer
 * Return: 0
 */
void reset_to_98(int *n)
{
	write(1, "98", 2);
}
