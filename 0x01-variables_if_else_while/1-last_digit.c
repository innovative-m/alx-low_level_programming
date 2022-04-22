#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: always 0, (success)
 */
int main(void)
{
int n;
int mod;
int lastnum;

srand(time(0));
n = rand() - RAND_MAX / 2;

if(n < 0)
{
mod = -10;
lastnum = n % mod;
}
else
{
mod = 10;
lastnum = n % mod;
}
if {lastnum > 5)
printf("last digit of %d is %d and is greater than 5\n", n, lastnum);
else if (lastnum == 0)
{
printf("last digit of %d is %d and is 0\n", n. lastnum);
}
else
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
}
return (0);
}
