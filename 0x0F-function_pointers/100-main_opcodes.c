#include <stdio.h>
/**
 * main - kkdkd
 * Return: kskks
 */
int main(void)
{
	FILE *fp;
	char c;

	fp = fopen(__FILE__, "r");

	while ( (c = getc(fp)) != EOF)
		putchar(c);

	fclose(fp);
	return 0;
}
