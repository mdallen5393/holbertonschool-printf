#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: format string to print
 * Return: int number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, j, numArgs;
	va_list arg;
	char buffer[1024];
	char *(*f)(va_list);
	char *newStr;
	va_start(arg, format);

	while (va_arg(arg, void) != NULL)
		numArgs++;

	if (numArgs != calcNumFmts(format))
		exit(98);

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
					exit(98);

				newStr = f(va_arg(arg, void));
				_strcat(buffer, newStr);
				j += _strlen(newStr);
			}
			i++;
		}
		else
			buffer[j] = format[i];
	}

	return (cpstr(buffer));
}

/**
 * get_func - finds function to use for adding to buffer
 * @s: character used to find correct function
 * Return: pointer to desired function
 */
void *(*get_func(char s))(va_list)
{
	format operations[] = {
		{'d', dipr},
		{'i', dipr},
		{'c', cpr},
		{'s', spr},
		{NULL, NULL}
	};
	int i = 0;

	while (operations[i] != NULL && s[0] != operations[i].fmt[0])
		i++;

	return (operations[i].f);
}

/**
 * _strlen - finds the length of a string
 * @s: string input
 * Return: 0 if s is NULL, integer length (excluding '\0') otherwise
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * calcNumFmts - calculates number of format specifiers in a string
 * @format: input format string
 * Return: integer number of format strings.
 */
int calcNumFmts(const char *format)
{
	int i = 0, numFmts = 0;

	if (format == NULL)
		return (0);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				i++;
			else
				numFmts++;
		}
		i++;
	}

	return (numFmts);
}

/**
 * cpstr - count and print each character in a string
 * @s: input string to print and count chars
 * Return: number of characters in the string.
 */
int cpstr(char *s)
{
	int numChars = 0;

	while (s[numChars] != '\0')
	{
		_putchar(s[numChars]);
		numChars++;
	}

	return (numChars);
}
