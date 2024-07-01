#include <stdio.h>
/**
 * _strncpy - Copies at most n characters from src to dest
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the modified destination string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (dest_start);
}
