#include "main.h"

/**
 * print_char - print character to stdout
 *
 * @ap: argument to be passed
 *
 * Return: return 1
 */


int print_char(va_list ap)
{
	char c = va_arg(ap, int);
		_putchar(c);
		return (1);

}
