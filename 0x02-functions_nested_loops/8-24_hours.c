#include <unistd.h>

/**
 * jack_bauer - function
 */
void jack_bauer(void)
{
	float n;
	n = '0';

	while (n <= '23')
	{
		write(1, "%f:", 3);

		float m;
		m = '0';

		while (m <= '59')
		{
			write(1, "%f\n", 3);
			m++;
		}
		n++;
	}
}
