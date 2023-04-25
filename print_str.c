#include "main.h"
/**
 * print_str - prints string to stdout
 *
 * @ap: argument passed
 *
 * Return: return string length
 */

int print_str(va_list ap)
{
	char *s = va_arg(ap, char *);
	int len = 0;

	if (s == NULL)
	s = "(null)";

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}

	return (len);
}
