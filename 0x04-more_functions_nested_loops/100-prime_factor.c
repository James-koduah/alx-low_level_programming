#include <stdio.h>
/**
 * main - djdkdk
 * Return: ddkdkkd
 */
int main(void)
{
	long int num;
	long int ii;
	long int n;


	num = 612852475143;
	n = num / 2;
	for (ii = 3; ii < n ; ii += 2)
	{
		if ((num % ii) == 0)
		{
			num /= ii;
		}
	}







	printf("%ld\n", num);
	return (0);
}
