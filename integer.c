#include "main.h"


/**
 * dipr - convert integer types to strings and returns pointer to string
 * @n: integer to convert to string
 * Return: pointer to new string
 */
char *dipr(va_list n)
{
	int len, i, copy, input;
	char *numStr;
	
	input = (int)(*n);
	copy = (int)(*n);
	len = 1;

	if (input == INT_MIN)
		return ("-2147483648");

	if (input < 0)
	{
		len++;
		input *= -1;
	}

	while (input / 10 != 0)
	{
		input /= 10;
		len++;
	}

	numStr = malloc(sizeof(*numStr) * (len + 1));
	
	if (copy < 0) {
		numStr[0] = '-';
		len--;
		i = 1;
	}

	for (; i < len; i++)
	{
		numStr[len - i - 1] = input % 10 + '0';
		input /= 10;
	}

	return (numStr);
}
