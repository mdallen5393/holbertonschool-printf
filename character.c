#include "main.h"

/**
 * cpr - converts char to string
 * @c: char to convert
 * Return: pointer to new string
 */
char *cpr(va_list c)
{
	static char *character;

	character = (char)(*c);
	
	return (character);
}
