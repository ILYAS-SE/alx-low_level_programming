#include "main.h"
/**
 *_memset -   fills memory with a constant byte .
 *@s: pointer block of memory to fill .
 *@b: constant byte .
 *@n: bytes of the memory .
 *Return: pointer s .
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
