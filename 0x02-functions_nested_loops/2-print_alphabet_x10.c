#include "main.h"

/**
 * main - entry point
 *
 * printing alphabets x10
 */
void print_alphabet_x10(void)
{
int alphabet;
int count;
count = 0;
while (count < 10)
{
for (alphabet  = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
count++;
_putchar('\n');
}  
}