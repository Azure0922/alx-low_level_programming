#include <unistd.h>
#include <stdio.h>

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

			scanf("%d", &m);
			write(1, "%d,  ", 4);
			if (m > '9')
			{
				write(1,"%2d, ", 4);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}	
