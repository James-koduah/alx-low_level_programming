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

	aa = 1;
	bb = 1;
	for (ii = 0; ii < 50; ii++)
	{
		if (ii != 0)
		{
		printf(", ");
		}
		printf("%ld", aa);
		cc = bb + aa;
		bb = aa;
		aa = cc;
	}
	return (0);
}
