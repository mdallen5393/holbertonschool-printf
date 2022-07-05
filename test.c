#include <stdio.h>
#include "main.h"

int main(void)
{
	int len, len2;

	len = _printf("%c", '\0');
	printf("---\n");
	len2 = printf("%c", '\0');
	printf("---\n");
	printf("[%d, %d]\n", len, len2);

	return (0);
}
