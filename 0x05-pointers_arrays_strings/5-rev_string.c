#include <stdio.h>
/**
 * rev_string - reverse string
 * @s: arrray of string
 * Return: kskskks
 */
void rev_string(char *s)
{
	int j;

	j = 0;
	while (s[j] != 0)
	{
		j++;
	}
	while (j >= 0)
	{
		putchar(s[j]);
		j--;
	}
	putchar('\n');
}
