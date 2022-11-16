#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - skskks
 * @ar - ksks
 * @av: ksksk
 * Return: kskks
 */
int main(int ar, char *av[])
{
	int a;
	int b;



	a = atoi(av[1]);
	b = atoi(av[ar - 1]);


	printf("%d\n", get_op_func(av[2])(a, b));
	return (0);
}
