#include <stdio.h>
/**
 * more_numbers - jkjjjj
 * Return: kdkdkd
 */
void more_numbers(void)
{
	int ii;
	int ten;

	for (ten = 0; ten < 10; ten++)
	{
		for (ii = 0; ii <= 14; ii++)
		{
			if (ii > 9)
			{
				putchar((ii / 10) + '0');
			}
			putchar((ii % 10) + '0');
		}
		putchar('\n');
	}
}
