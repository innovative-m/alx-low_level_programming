#include "main.h"

/**
 * _isalpha - check if c is an alphabet 
 *
 * return 1 if c is a letter
 * int c to print
 * Return 0 Always
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
