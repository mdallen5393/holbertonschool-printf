#include "main.h"
#include <stdio.h>

int ip(int count);

/**
 * _printf - prints output according to a format
 * @format: format string to print
 * Return: int number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, j, count = 0;
	va_list arg;
	char buffer[2048] = {'\0'}, *(*f)(va_list), *newStr;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	for (i = 0, j = 0; format[i] != '\0'; i++, j++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
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
					buffer[++j] = format[i + 1];
				}
				else
				{
					newStr = f(arg);
					_strcat(buffer, newStr);
					j += _strlen(newStr) - 1;
					if (newStr[0] == '\0' && newStr[1] == '\0')
						count = ip(count);
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

/**
 * ip - increment variable and print null character
 * @count: var to increment
 * Return: incremented variable
 *
 * Description: purpose - to satisfy the betty linter's <40 line req.
 */
int ip(int count)
{
	_putchar('\0');
	return (count + 1);
}
