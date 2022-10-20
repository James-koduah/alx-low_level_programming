#include <stdio.h>
/**
 * main - kdkdk
 * Return: kddkkd
 */
void main(void)
{
	int ch;

	for (ch = 1 ; ch <= 100; ch++)
	{
		if (ch != 1)
		{
			putchar(' ');
		}
		if (ch % 3 == 0)
		{
			printf("Fizz");
		}
		else
		if (ch % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", ch);
		}
	}
	putchar('\n');
}
