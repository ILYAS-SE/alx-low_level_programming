#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int length = 0;
int start = 0;
int end;
/* Find the length of the string */
while (s[length] != '\0')
{
length++;
}
end = length - 1;
/* Swap characters from the start and end of the string */
while (start < end)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
