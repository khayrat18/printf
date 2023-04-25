#include "main.h"

int print_integer(va_list ap)
{
    int n = va_arg(ap, int);
    int len = 0;

    if (n < 0)
    {
        _putchar('-');
        len++;
        n = -n;
    }

    if (n / 10)
        len += print_integer_helper(n / 10);

    _putchar(n % 10 + '0');
    len++;

    return len;
}

int print_integer_helper(int n)
{
    int len = 0;

    if (n / 10)
        len += print_integer_helper(n / 10);

    _putchar(n % 10 + '0');
    len++;

    return len;
}
