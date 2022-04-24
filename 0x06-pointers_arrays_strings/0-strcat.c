#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * *_strcat - function that concatunate two strings
 *
 *Return: dest the result string
 */
char *_strcat(char *dest, char *src) 
{
char c, c2;
c = 0;
while (dest[c]);
c++;
for (c2 = 0;  src[c2]; c++)
dest[c++] = src[c2];
return (dest);
}
