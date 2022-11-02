#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * is_palindrome - kkkksksksk
 * @s: ksksksk
 * Return: kskskks
 */
int _strlen(char *s);
void rev(char *s, int i, int len);
int is_palindrome(char *s)
{
	int b;
	int q;
	char *dest;

	dest = (char *)malloc(400);

	strcpy(dest, s);

	b = _strlen(s);
	rev(dest, 0, b);
	q = strcmp(s, dest);
	if (q == 0)
	{
		q = 1;
	}
	else
	{
		q = 0;
	}
	return (q);

}

/**
 * rev - kskskks
 * @s: kskskks
 * @i: kskskks
 * @len: kskskks
 * Return: kskksk
 */
void rev(char *s, int i, int len)
{
	char t;

	if (i < (len / 2))
	{
	t = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = t;
	rev(s, (i + 1), len);
	}
}

/**
 * _strlen - ksksk
 * @s: ksksksk
 * Return: kskskks
 */
int _strlen(char *s)
{
	int jj;

	jj = 0;

	if (*s != 0)
	{
		jj++;
		jj += _strlen(s + 1);
	}
	return (jj);
}
