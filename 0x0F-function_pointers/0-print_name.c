#include <stdio.h>

/**
* print_name - Function to print a name using a specified printing function
* @name: The name to be printed
* @f: Pointer to the printing function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
* print - Function to print a name to the standard output
* @name: The name to be printed
*/
void print(char *name)
{
	printf("%s\n", name);
}
