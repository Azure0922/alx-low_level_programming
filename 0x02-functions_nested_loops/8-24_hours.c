#include <unistd.h>

/**
 * jack_bauer - function
 */
void jack_bauer(void)
{
	int n = '0';
	/* n - hour */

	while (n < '3')
	{
		write(1, &n, 1);

		int m = '0';
		/* m - hour 2 */

		while (m <= '9')
		{
			write(1, &m, 1);
			write(1, ":", 1);

			int x = '0';
			/* x - min */

			while (x < '6')
			{
				write(1, &x, 1);

				int y = '0';
				/* y - min 2 */
				
				while (y <= '9')
				{
					write(1, &y, 1);
					write(1, "\n", 1);
					y++;
				}
				x++;
			}
			m++;
		}
		n++;
	}
}
