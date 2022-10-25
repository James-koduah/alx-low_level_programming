#include <stdio.h>
/**
 * rev_string - reverse string
 * @s: arrray of string
 * Return: kskskks
 */
int main(void)
{
	int j;
	int i;
	char a;
	char s[10] = "My School";


	i = 0;
	j = 0;
	while (s[j] != 0)
	{	 
		j++;
	}
j--;

	char cc[j];
printf("%s\n",s);
	while (j >= 0 )
	{
		cc[i] = s[j];
		i++;
		j--;
	}
	printf("%s\n", cc);
	return (0);
}
