#include "main.h"

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
