#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse string
 * @s: arrray of string
 * Return: kskskks
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int mid = len / 2;
	char t;
	int i;

	for (i = 0; i < mid; i++)
	{
		t = s[len - i - 1];
		s[len - i - 1] = t;
	}
}
