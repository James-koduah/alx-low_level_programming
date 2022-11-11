#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two positive numbers
 * Return: kskksk
 */
int main(int argc,char *argv[])
{

	int b;
	int a;


	printf("%d\n",a);
	printf("%d\n",b);
			
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	b = atoi(argv[2]);
	a = atoi(argv[1]);
	return (0);
}
