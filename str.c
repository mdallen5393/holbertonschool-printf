#include "main.h"

/**
 * spr - converts string to string
 * @s: string argument
 * Return: pointer to new string
 */
char *spr(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		return ("(null)");

	return (str);
}
