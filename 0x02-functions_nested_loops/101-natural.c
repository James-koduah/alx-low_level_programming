#include <stdio.h>
/**
 * main - kdkdkkd
 * Return: kskskk
 */
int main(void)
{
	int three;
	int total;

	three = 0;
	total = 0;
	while (three < 1024)
	{
		if ((three % 3) == 0 || (three % 5) == 0)
		{
			total += three;
		}
		three++;
	}


	printf("%d\n", total);
	return (0);
}
