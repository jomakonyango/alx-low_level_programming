#include <stdio.h>
/**
 * _strpbrk - Searches the string s for any of a set of bytes
 * @s: String to be searched
 * @accept: Substring of bytes to search for
 *
 * Return: Return a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
return (s);
a++;
}
s++;
}

return (NULL);
}
