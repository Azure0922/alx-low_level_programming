#include <unistd.h>

/**
 * jack_bauer - function
 */
void jack_bauer(void)
{
	int n = '0';

	while (n <= '23')
	{
		write(1, "%2d:", 3);

		int m = '0';

		while (m <= '59')
		{
			write(1, "%2d\n", 3);
			m++;
		}
		n++;
	}
}
