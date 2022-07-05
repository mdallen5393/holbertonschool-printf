#include "main.h"
#include <stdio.h>

/**
 * dipr - convert integer types to strings and returns pointer to string
 * @n: integer to convert to string
 * Return: pointer to new string
 */
char *dipr(va_list n)
{
	int len, i, copy, input, end;
	char *numStr;

	input = va_arg(n, int);
	copy = input;
	len = 1;

	if (input == INT_MIN)
		return ("-2147483648");

	if (input < 0)
	{
		len++;
		input *= -1;
	}

	while (copy / 10 != 0)
	{
		copy /= 10;
		len++;
	}
	numStr = malloc(sizeof(*numStr) * (len + 1));
	
	if (numStr == NULL)
		exit(98);

	end = 0;
	if (copy < 0)
	{
		numStr[0] = '-';
		end = 1;
	}

	for (i = len - 1; i >= end; i--)
	{
		numStr[i] = input % 10 + '0';
		input /= 10;
	}

	return (numStr);
}
