#include "main.h"

/**
 * spr - converts string to string 
 * @s: string argument 
 * Return: pointer to new string 
 */
char *spr(va_list s)
{
	int i;
	char *str;
	int len = 0;

	while (s[len] != '\0')
		len++;
	
	str = malloc(sizeof(*str) * (len + 1));
	
	for (i = 0; i < len; i++)
		str[i] = s[i];
	
	return (str);
}
