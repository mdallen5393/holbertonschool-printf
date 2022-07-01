#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: format string to print
 * Return: int number of characters printed 
 */
int _printf(const char *format, ...)
{
	int i, j, count, numArgs, numChars;
	va_start arg;
	char buffer[1024];
	char *(*f)(va_list);

	count = calcNumFmts(format);
	numArgs = 0;
	while (va_arg != NULL)
		numArgs++;

	if (numArgs != count)
		return (NULL);

	i = 0;
	j = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				buffer[j] = format[i];
			}
			else
			{
				f = get_func(format[i + 1]);
				
				if (f == NULL)
					exit(98);

				strcat(buffer, f(va_arg)); //TODO
				//TODO j += length of passed int

			}
			i++;
		}
		else
		{
			buffer[j] = format[i];
		}

		i++;
		j++;
	}

	numChars = 0;
	while (buffer[numChars] != '\0')
	{
		_putchar(buffer[numChars]); //TODO
		numChars++;

	}

	return (numChars);
}

/**
 * get_func - finds function to use for adding to buffer
 * @va_list: list of optional arguments passed to _printf
 * Return: pointer to desired function
 */
void *(*get_func(char *s))(va_list)
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
 */
int calcNumFmts(char *format)
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
		i++
	}

	return (numFmts);
}
