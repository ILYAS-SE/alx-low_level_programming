#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string.
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
int length = 0;  /* Initialize a variable to store the length */
/* Iterate through the string until the null terminator is found */
while (*s != '\0')
{
length++;   /* Increment the length for each character */
s++;        /* Move to the next character in the string */
}
return (0);
}
