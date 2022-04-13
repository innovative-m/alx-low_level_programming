#include "main.h"

/**
 * main - Entry point
 *
 * return 1 if c is a letter
 * int c to print
 * Return 0 Always
 */
int _islower(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
