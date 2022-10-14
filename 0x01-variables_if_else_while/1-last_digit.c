#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - lslsl
 * Return: lslslsl
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last; 
	last = n % 10;
	if (last > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	if (last == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last);
	}
	if (6 > last > 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}

	return (0);
}
