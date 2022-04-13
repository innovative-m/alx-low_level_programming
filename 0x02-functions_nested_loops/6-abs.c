#include <stdio.h>

/**
 * int _abs - value absolute
 *
 * @n: to hold the inpit
 * Return: Always 0.
 */
int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else if (n == 0)
{
return (0);
}
else
{
return (n);
}
}
