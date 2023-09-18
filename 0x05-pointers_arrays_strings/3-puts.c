#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to a string.
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str); /* Print the current character */
str++;         /* Move to the next character */
}
putchar('\n'); /* Print a new line after the string */
}
