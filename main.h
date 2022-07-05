#ifndef MAIN_H
#define MAIN_H


/* STANDARD LIBRARIES */
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

/* STRUCTS */

/**
 * struct format - struct for each format
 * @fmt: the format specifier
 * @f: the function associated
 */
typedef struct format
{
	char fmt;
	char *(*f)(va_list);
} format;


/* FUNCTION PROTOTYPES */
/* str.c */
char *spr(va_list);

/* int.c */
char *dipr(va_list);

/* fp.c */


/* char.c */
char *cpr(va_list);

/* _printf.c */
int _printf(const char *format, ...);

/* helpers.c */
char *(*get_func(char s))(va_list);
int cpstr(char *s);
int _putchar(char c);
char *_strcat(char *s1, char *s2);
int _strlen(char *s);

#endif
