#include <unistd.h>

/**
 *times_table - check the code
 */
void times_table(void)
{
	int i = '0', j;
	/**
	 * i - num 1
	 * j - num 2
	 */

	while (i <= '9')
	{
		j = '0';

		while (j <= '9')
		{
			int m = i * j;
			/* m - product */

			if (m == '0' || m <= '9')
			{
				return (m);
				write(1, ",  ", 3);
			}
			else if (m > '9')
			{
				return (m);
				write(1, ", ", 2);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
