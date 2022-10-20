#include <stdio.h>
/**
 * main - kdkdk
 * Return: kddkkd
 */
int main(void)
{
	int ch;

	for (ch = 1 ; ch <= 100; ch++)
	{
		if (ch != 1)
		{
			putchar(' ');
		}
		if (ch % 3 == 0 || ch % 5 == 0)
		{
			if (ch % 3 == 0)
			{
				printf("Fizz");
			}
			if (ch % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", ch);
		}
	}
	putchar('\n');
	return (0);
}
