#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - skskks
 * @ar: ksks
 * @av: ksksk
 * Return: kskks
 */
int main(int ar, char *av[])
{
	int a;
	int b;
	char *v;

	if (ar != 4)
	{
		printf("Error\n");
			exit(98);
	}

	a = atoi(av[1]);
	v = av[2];
	b = atoi(av[ar - 1]);
	if ((*v == '/' || *v == '%') &&  b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(v)(a, b));
	return (0);
}
