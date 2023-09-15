#include "main.h"
/**
* _isupper - function that checks for uppercase character.
* @c: the character checked.
* Return: 1 or 0
*/

int _isupper(int c)
{
char i = 0;
for (i = 'A'; i <= 'Z'; i++)
{
if (i == c)
{
return (1);
}
}
return (0);
}
