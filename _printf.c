#include "main.h"
#include <stdio.h>
/**
 * _printf - prints output according to a format
 * @format: format string to print
 * Return: int number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, j;
	va_list arg;
	char buffer[1024] = {'\0'};
	char *(*f)(va_list);
	char *newStr;

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
				}
			}
		i++;
		}
		else
			buffer[j] = format[i];

/*		printf("%c, %d, %d: %s\n", format[i], i, j, buffer);*/
	}
	va_end(arg);

	return (cpstr(buffer));
}
