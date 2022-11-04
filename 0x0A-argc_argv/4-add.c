#include <stdio.h>
#include <stdlib.h>
/**
 * main - kskks
 * @agrc: kskksk
 * @agrv: ksksksk
 * Return: ksksk
 */
int main(int agrc, char *agrv[])
{
	int b;
	int i;
	int c;

	b = 0;

	for (i = 1; i < agrc; i++)
	{
		c = atoi(agrv[i]);

		if (c == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			b += c;
		}
	}
	printf("%d\n", b);
	return (0);
}
