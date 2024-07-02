#include <stdio.h>
/**
 * _strstr - Locates the first occurrence of a substring in a string
 * @haystack: Pointer to the input string
 * @needle: Pointer to the substring to search for
 *
 * Return: Pointer to the first occurrence of `needle` in `haystack`,
 *         or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
return haystack;

haystack++;
}

return (NULL);
}
