#include <stdio.h>
/**
 * print_rev - print a string form a pointed position
 * @s: kskskks
 * Return: lskdkdk
 */
int main(void)
{
	char *str;
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	int x = 9;
	int *i;
	int *s;
	s = &x;
	i = s;
	
	int j=0;
	while (str[j] != 0)
	{
		putchar(str[j]);
		j++;
	}
printf("%d\n",j);

	while (j >= 0)
	{
		putchar(str[j]);
		j--;
	}
	putchar('\n');
	return (0);
}
