#include "main.h"

/**
 * get_func - finds function to use for adding to buffer
 * @s: character used to find correct function
 * Return: pointer to desired function
 */
char *(*get_func(char s))(va_list)
{
	format operations[] = {
		{'d', dipr},
		{'i', dipr},
		{'c', cpr},
		{'s', spr},
		{'\0', NULL}
	};
	int i = 0;

	while (s != operations[i].fmt)
		i++;

	if (i > 4)
		return (NULL);

	return (operations[i].f);
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


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _strcat - concatenates two strings
 * @s1: first string
 * @s2: second string (s2 is added to the end of s1)
 * Return: pointer to s1
 */
char *_strcat(char *s1, char *s2)
{
	int l1 = _strlen(s1);
	int l2 = _strlen(s2);
	int i;

	for (i = 0; i < l2; i++)
		s1[l1 + i] = s2[i];

	return (s1);
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
