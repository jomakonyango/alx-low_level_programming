#include <stdio.h>
/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if `c` is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
