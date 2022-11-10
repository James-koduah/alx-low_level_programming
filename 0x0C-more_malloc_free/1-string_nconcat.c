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
	char *arr;
	int len;
	unsigned int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;

	len = strlen(s1);
	len += n;

	arr = malloc(len - 1);
	if (arr == NULL)
		return (NULL);

	strcpy(arr, s1);
	strncat(arr, s2, n);

	return (arr);
}
