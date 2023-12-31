#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be reversed and printed.
 */
void print_rev(char *s)
{
int length = 0;
int i;
/* Find the length of the string */
while (s[length] != '\0')
{
length++;
}
/* Print the string in reverse */
for (i = length - 1; i >= 0; i--)
{
putchar(s[i]); /* Use putchar instead of _putchar */
}
putchar('\n'); /* Use putchar instead of _putchar */
}
