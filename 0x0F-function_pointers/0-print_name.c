#include <stdio.h>

/**
* print_name - Function to print a name using pointer to function
* @name: string to add
* @f: Pointer to function
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f== NULL)
		return;
	f(name);
}
