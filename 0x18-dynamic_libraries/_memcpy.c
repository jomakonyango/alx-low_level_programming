#include <stdio.h>
/**
 * _memcpy - Copies n bytes from src to dest
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the modified destination memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_start = dest;

while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

return (dest_start);
}
