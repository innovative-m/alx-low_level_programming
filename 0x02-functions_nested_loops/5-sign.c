#include "main.h"

/**
 * pront_sign _ function to print sign of number base on the argument
 *
 * print_sign - return 0 letter not lowercase, 1 letter lower
 * the int n to print
 *
 * Return 1 if + return 0 if 0 else retturn -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
