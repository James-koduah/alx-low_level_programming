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
	int i;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", i * b);


	return (0);
}
