#include "main.h"

/**
 * spr - converts string to string
 * @s: string argument
 * Return: pointer to new string
 */
char *spr(va_list s)
{
	return (va_arg(s, char *));
}
