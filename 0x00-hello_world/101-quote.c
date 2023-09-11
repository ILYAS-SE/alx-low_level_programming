#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
write(2, "and that piece of art is useful\"", 32);   
write(2, " - Dora Korpar, 2015-10-19\n", 26);
 return (1);
}
