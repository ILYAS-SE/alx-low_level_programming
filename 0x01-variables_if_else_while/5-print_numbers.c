#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0'); // Convert the digit to a character and print it
digit++;
}
putchar('\n');
return (0);
}
