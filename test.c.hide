#include "main.h"
#include <stdio.h>

int main(void)
{
	int len, len2;

	len = _printf("print int_min: %i\n", INT_MIN);
	len2 = printf("print int_min: %i\n", INT_MIN);
	printf("[%d, %d]\n", len, len2);


	len = _printf("print character: %i\n", 'h');
	len2 = printf("print character: %i\n", 'h');
	printf("[%d, %d]\n", len, len2);

	len = _printf("print int_max: %i\n", INT_MAX);
	len2 = printf("print int_max: %i\n", INT_MAX);
	printf("[%d, %d]\n", len, len2);

	len = _printf("print negative: %i\n", -456789);
	len2 = printf("print negative: %i\n", -456789);
	printf("[%d, %d]\n", len, len2);

	len = _printf("print empty: %i\n", NULL);
	len2 = printf("print empty: %i\n", NULL);
	printf("[%d, %d]\n", len, len2);

	len = _printf("print zero: %i\n", 0);
	len2 = printf("print zero: %i\n", 0);
	printf("[%d, %d]\n", len, len2);

	len = _printf("print null: %i\n", NULL);
	len2 = printf("print null: %i\n", NULL);
	printf("[%d, %d]\n", len, len2);

	len = _printf("print string: %s\n", "hello");
	len2 = printf("print string: %s\n", "hello");
	printf("[%d, %d]\n", len, len2);

	len = _printf("print empty string: %s\n", "");
	len2 = printf("print empty string: %s\n", "");
	printf("[%d, %d]\n", len, len2);

	len = _printf("print character: %c\n", 'h');
	len2 = printf("print character: %c\n", 'h');
	printf("[%d, %d]\n", len, len2);

	len = _printf("print null character: %c\n", '\0');
	len2 = printf("print null character: %c\n", '\0');
	printf("[%d, %d]\n", len, len2);
	
	len = _printf(NULL);
	len2 = printf(NULL);
	printf("[%d, %d]\n", len, len2);

	return (0);
}
