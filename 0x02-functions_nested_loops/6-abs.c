#include <stdio.h>

/**
 * int _aabbss - value absolute
 * the int to print
 *
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