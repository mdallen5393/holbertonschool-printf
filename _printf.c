#include "main.h"
#include <stdio.h>
/**
 * _printf - prints output according to a format
 * @format: format string to print
 * Return: int number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, j, count = 0;
	va_list arg;
	char buffer[2048] = {'\0'};
	char *(*f)(va_list);
	char *newStr;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	for (i = 0, j = 0; format[i] != '\0'; i++, j++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				buffer[j] = format[i];
			else
			{
				f = get_func(format[i + 1]);
				if (f == NULL)
				{
					buffer[j] = format[i];
					buffer[j + 1] = format[i + 1];
					j++;
				}
				else
				{
					newStr = f(arg);
					_strcat(buffer, newStr);
					j += _strlen(newStr) - 1;
					if (newStr[0] == '\0' && newStr[1] == '\0')
						count++;
				}
			}
			i++;
		}
		else
			buffer[j] = format[i];
	}
	va_end(arg);
	return (count + cpstr(buffer));
}
