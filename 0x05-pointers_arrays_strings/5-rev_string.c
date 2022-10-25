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
	char t;

	i = 0;
	j = 0;
	while (s[j] != 0)
	{
		j++;
	}
	j--;
	while (j >= (j / 2))
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		i++;
		j--;
	}

}
