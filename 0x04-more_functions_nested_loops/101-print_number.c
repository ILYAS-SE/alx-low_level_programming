/**
 * print_number - prints integers
 * @n: Accepts integer
 *
 * Return: Nothing (always)
 */
#include "main.h"
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if (num / 10 != 0)
{
print_number(num / 10);
}
_putchar(num % 10 + '0');
}
