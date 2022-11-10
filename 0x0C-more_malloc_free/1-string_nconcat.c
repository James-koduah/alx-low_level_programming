#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - skskskks
 * @s1: string 1
 * @s2: string 2
 * @n: number
 * Return: kskksks
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int len;
	int i;

	
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";


	strncat(s1, s2, n);
	len = strlen(s1);
	arr = malloc(len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = s1[i];
	}
	return (arr);
	
}
