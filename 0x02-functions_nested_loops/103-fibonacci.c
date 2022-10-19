#include <stdio.h>
/**
 * main - kdkdkdkdk
 * Return: skskkssk
 */
int main(void)
{
	long int aa;
	long int bb;
	int ii;
	long int cc;
	long int dd;

	aa = 1;
	bb = 1;
	dd = 0;
	for (ii = 0; ii < 50; ii++)
	{
		if (aa > 4000000)
		{
			break;
		}
		cc = bb + aa;
		bb = aa;
		aa = cc;
		if ((cc % 2) == 0)
		{
			dd += cc;
		}
	}
	printf("%ld", dd);
	putchar('\n');
	return (0);
}
