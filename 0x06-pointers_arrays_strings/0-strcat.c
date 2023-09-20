/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int i = 0;
// Find the length of the destination string
while (dest[dest_len] != '\0')
{
dest_len++;
}
// Append the source string to the destination string
while (src[i] != '\0')
{
dest[dest_len + i] = src[i];
i++;
}
// Null-terminate the concatenated string
dest[dest_len + i] = '\0';
return dest;
}
