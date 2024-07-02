#include <stdio.h>
/**
 * _strncat - Concatenates (appends) at most n characters from src to dest
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to append
 *
 * Return: Pointer to the modified destination string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*dest != '\0')
dest++;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (dest_start);
}
