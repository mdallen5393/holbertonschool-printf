#include "main.h"

/**
 * dipr - convert integer types to strings and returns pointer to string
 * @n: integer to convert to string
 * Return: pointer to new string
 */
char *dipr(va_list n)
{
	int len, i, nCopy;
	char *numStr;

	nCopy = n;
	len = 1;
	while (nCopy / 10 != 0)
	{
		nCopy /= 10;
		len++;
	}

	numStr = malloc(sizeof(*numStr) * (len + 1));

	for (i = 0; i < len; i++)
	{
		numStr[len - i - 1] = n % 10 + '0';
		n /= 10;
	}

	return (numStr);
}
