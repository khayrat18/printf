#include "main.h"

int print_unsigned(va_list ap)
{
    unsigned int n = va_arg(ap, unsigned int);
    int len = 0;

    if (n / 10)
        len += print_unsigned_helper(n / 10);

    _putchar(n % 10 + '0');
    len++;

    return len;
}

int print_unsigned_helper(unsigned int n)
{
    int len = 0;

    if (n / 10)
        len += print_unsigned_helper(n / 10);

    _putchar(n % 10 + '0');
    len++;

    return len;
}
