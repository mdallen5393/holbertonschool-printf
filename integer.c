#include "testmain.h"


/**
 * dipr - convert integer types to strings and returns pointer to string
 * @n: integer to convert to string
 * Return: pointer to new string
 */
char *dipr(va_list n)
{
	int len, i, nCopy, curr;
	char *numStr;

	nCopy = n;
	len = 1;

	if (n == INT_MIN)
		return (spr("-2147483648"));

	if (n < 0)
	{
		len++;
		n *= -1;
	}

	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}

	numStr = malloc(sizeof(*numStr) * (len + 1));
	
	if (nCopy < 0) {
		numStr[0] = '-';
		len--;
		i = 1;
	}

	for (; i < len; i++)
	{
		numStr[len - i - 1] = n % 10 + '0';
		n /= 10;
	}

	return (numStr);
}
