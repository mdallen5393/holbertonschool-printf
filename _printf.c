#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: format string to print
 * Return: int number of characters printed 
 */
int _printf(const char *format, ...)
{

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
        {'%', ppr},
        {NULL, NULL}
    };

    
}
