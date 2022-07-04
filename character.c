#include "main.h"

/**
 * cpr - converts char to string
 * @c: char to convert
 * Return: pointer to new string
 */
char *cpr(va_list c)
{
	/*char character[1];

	character[0] = (char)(*c);
	
	return(character);*/
	return (&c);
}
