#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
*Return: Always 0
*/
int main(void)
{
int c;
for (c = 48; c < 58; c++)
{
putchar (c);
if (c != 57)
{
putchar (44);
putchar (32);
}
}
putchar(10);
return (0);
}
