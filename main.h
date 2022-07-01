#ifndef MAIN_H
#define MAIN_H


/* STANDARD LIBRARIES */
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>

/* STRUCTS */

/**
 * struct op - struct for each format
 * @op: the operator
 * @f: the function associated
 */
typedef struct format
{
    char fmt;
    char *(*f)(va_list);
} format;


/* FUNCTION PROTOTYPES */
/* string.c */
char *spr(va_list);

/* integer.c */
char *dipr(va_list);
char *itoa(int); //convert int to string

/* float.c */


/* character.c */
char *cpr(va_list);

/* _printf.c */
void *(*get_func(char *s))(va_list);
int _printf(const char *format, ...);

#endif
