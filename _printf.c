#include "main.h"
#include <stdarg.h>
/**
 * _printf - function that prints to stdout
 *@format: number to arguments
 *Return: return number of arguments
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	int count = 0;
        int check_specifier;
	va_list ap;
	func_t my_array[] = {
	{'s', print_str}, {'c', print_char}, {'%', print_cent}, {'i', print_integer},
	{'d', print_dec}, {'u', print_unsigned}};
	va_start(ap, format);

	while (*format)
	{
	if (*format == '%')
	{
	format++;
	for (i = 0; i < sizeof(my_array) / sizeof(func_t); i++)
	{
		if (*format == my_array[i].t)
		{
			count += my_array[i].f(ap);
			check_specifier = 1;
			break;
		}
	}
	if (!check_specifier)
	{
	_putchar('%');
		count++;
	}
	}
	else
	{
		_putchar(*format);
	count++;
	}
	format++;
	}
	va_end(ap);
	return (count);
}

