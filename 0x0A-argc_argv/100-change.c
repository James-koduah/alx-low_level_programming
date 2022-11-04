#include <stdio.h>
#include <stdlib.h>
/**
 * main - kskks
 * @argc: ksksk
 * @argv: skksk
 * Return: kskks
 */
int main(int argc, char *argv[])
{
	int b;
	int c;

	c = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	b = atoi(argv[1]);
	if (b / 25 >= 1)
	{
		c += b / 25;
		b = b % 25;
	}
	if (b / 10 >= 1)
	{
	c += b / 10;
	b = b % 10;
	}
	if (b / 5 >= 1)
	{
		c += b / 5;
		b = b % 5;
	}
	if (b / 2 >= 1)
	{
		c += b / 2;
		b = b % 2;
	}
	if (b / 1 >= 1)
	{
		c += b / 1;
		b = b % 1;
	}
	printf("%d\n", c);
	return (0);
}
