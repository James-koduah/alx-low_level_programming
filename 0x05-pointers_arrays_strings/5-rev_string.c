#include <stdio.h>
/**
 * rev_string - reverse string
 * @s: arrray of string
 * Return: kskskks
 */
void rev_string(char *s)
{
	int j;
	int i;
	char b[10];


	i = 0;
	j = 0;
	while (s[j] != 0)
	{
		 
		j++;
	putchar(j);
	}

	

	while (j >= 0)
	{
		b[i] = s[j];
		i++;
		j--;
	}

}
