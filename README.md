

# 0x12. C - printf



## Description:
C implementation of the standard library function printf. Printf is used to print formatted strings to standard output. It is a variadic function that takes a format string followed by a number of optional variables and returns the number of characters printed.



## Instructions:


### Printing string literals:
__Format:__ `_printf("string to print\n");`
Description: _Prints whatever is inserted between double-quotes.  Use the backslash character (\) to print special characters such as '\n' to print a newline character._



### Using Format Specifiers:

Format specifiers are characters prepended with a percent (%) symbol.  The function requires one optional variable per format specifier, with the exception of the "%%" specifier, which simply prints a percent symbol (similar to "\%").


#### Printing Integer Variables:
__Format Specifier:__ %i _or_ %d
Ex 1: `_printf("numA = %i\n", 32);`
> numA = 32

Ex 2: `_printf("A = %d, B = %i\n", numA, numB);`
> A = 10, B = 13

Ex 3: `_printf("The temperature is %i degrees C\n", -18);`
> The temperature is -18 degrees C


#### Printing Character Variables:
__Format Specifier:__ %c
Ex 1: `_printf("You chose option %c!\n", op);`
> You chose option e!

Ex 2: `_printf("Your grade is an %c\n", 'B');
> Your grade is a B


#### Printing String Variables:
__Format Specifier:__%s
Ex 1: `_printf("Hello, %s!\n", name);`
> Hello, Matthew!

Ex 2: `_printf("Hello, %s, my name is %s.\n", name, "Nick");`
> Hello, Matthew, my name is Nick.



## Authors:
**Nicholas French** | [github - MetaFrench](https://github.com/MetaFrench)

**Matthew Allen** | [github - mdallen5393](https://github.com/mdallen5393)
