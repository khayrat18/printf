#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct fun - placeholder for prototypes
 *
 * @t: format specifier character
 * @f: function to handle printing
 */

typedef struct fun
{
	char t;

	int (*f)(va_list);

} func_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_str(va_list ap);
int print_integer(va_list ap);
int print_dec(va_list ap);
int print_binary(va_list ap);
int print_unsigned(va_list ap);
int print_octal(va_list ap);
int print_hex(va_list ap);
int print_HEX(va_list ap);
int print_exclusive_str(va_list ap);
int print_ptr(va_list ap);
int print_rev(va_list ap);
int print_rot13(va_list ap);
int print_cent(va_list ap __attribute__((unused)));
int print_integer_helper(int n);
int print_unsigned_helper(unsigned int n);
int print_dec_helper(int n);









#endif
