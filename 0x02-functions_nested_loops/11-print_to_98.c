#include <stdio.h>
/**
 * print_to_98 - jakek
 * @n: kkdkdkd
 * Return: kdkdkdk
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int a;

		a = n;
		while (a >= 98)
		{
			printf("%d", a);
			if (a > 98)
			{
				printf(", ");
			}
			a--;
		}
	}
	else
	if (n < 98)
	{
		int i;

		i = n;
		while (i <= 98)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf(", ");
			}
			i++;
		}
	}
	else
	{
		printf("98");
	}
	putchar('\n');
}
