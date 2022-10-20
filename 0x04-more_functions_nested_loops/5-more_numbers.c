#include <unistd.h>

/**
 * more_numbers - more num
 */
void more_numbers(void)
{
	int i;
	/* i - loop */

	i = 0;

	while (i <= 9)
	{
		write(1, "01234567891011121314\n", 21);
		i++;
	}
}
