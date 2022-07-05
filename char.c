#include "main.h"
#include <stdio.h>
/**
 * cpr - converts char to string
 * @c: char to convert
 * Return: pointer to new string
 */
char *cpr(va_list c)
{
	static char character[2];

	character[0] = (char)va_arg(c, int);
	character[1] = '\0';

	return (character);
}
