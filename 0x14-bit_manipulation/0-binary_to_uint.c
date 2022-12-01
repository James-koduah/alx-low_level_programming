#include "main.h"

unsigned int power_two(unsigned int c);

/**
 * binary_to_uint - convert a string of binary to int
 * @b: string of the binary
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, num, power, ans, final;

	/**
	 * base 2 is converted to base 10 this way
	 *      base2 :	1   0   0   0   1   1   0
	 *    multiply: X   X   X   X   X   X   X
	 *     convert: 2⁶  2⁵  2⁴  2³  2²  2¹  2⁰
	 *      base10: 64  0   0   0   4   2   0
	 *            : 64      +       4 + 2
	 *        ANS : 70
	 */
	len = strlen(b);
	power = len - 1;
	final = 0;
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '0')
				num = 0;
			else
				num = 1;
	/*we begin converting from the left side */
	/*power is equal to the exponent of each charcter of the binary string*/

			ans = power_two(power);
			ans *= num;
			final += ans;
			power--;
		}
		else
		{
			return (0);
		}
	}

	return (final);
}
/**
 * power_two - returns power of two
 * @c: exponent
 * Return: result of 2 exponent c
 */
unsigned int power_two(unsigned int c)
{
	unsigned int a, i;

	if (c == 0)
	{
		return (1);
	}
	a = 2;
	for (i = 1; i < c; i++)
	{
		a *= 2;
	}

	return (a);
}
