#include <stdio.h>
/**
 * main - kdkdkkd
 * Return: kskskk
 */
int main(void)
{
	int three;
	int threeSum;
	int five;
	int fiveSum;
	int total;

	three = 3;
	threeSum = 0;
	while (three < 1024)
	{
		threeSum = threeSum + three ;
		three = three + 3;
	}
	
	five = 5;
	fiveSum = 0;
	while (five <1024)
	{
		fiveSum = fiveSum + five;
		five = five + 5;
	}
	total = fiveSum + threeSum;


	printf("%d\n", total);
	return (0);
}
