#include "main.h"
/**
 * _isupper - Checks if character is uppercase letters
 * @c: charater to be checked
 *
 * Description: Returns 1 if the character is an uppercase letter, 0 otherwise.
 * Uppercase letters are characters in the range 'A' to 'Z'.
 *
 * Return: 1 if @c is an uppercase letter, 0 otherwise
 */
int _isupper(int c)
/* This function checks if a character is an uppercase letter. */
{
	if (c >= 'A' && c <= 'Z')
		return (1);/* if character is uppercase */
	else
		return (0);/* returned if charater not uppercase*/
}
