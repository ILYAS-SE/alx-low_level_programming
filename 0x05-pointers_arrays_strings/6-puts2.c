#include "main.h"

/**
 * Prints every other character of a string, starting with the first character.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i += 2; /* Move to the next character (every other character) */
}
putchar('\n'); /* Print a newline character after the loop */
}
