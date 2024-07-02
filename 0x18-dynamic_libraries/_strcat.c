#include <stdio.h>
/**
 * _strcat - Concatenates (appends) src to dest
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the modified destination string (dest)
 */
char *_strcat(char *dest, char *src)
{
char *dest_start = dest;

while (*dest != '\0')
dest++;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (dest_start);
}
