#include <stdio.h>
/**
 * _isalpha - check if letter or not
 * @c: kdkd
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	int ch;

	if ((c >= 'a' && c <= 'z)' || (c >= 'A' && c <= 'Z'))
	{
		ch = 1;
	}
	else
	{
		ch = 0;
	}
	return (ch);
}
