#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc.
* @m: The number of bytes to be allocated.
*
* Return: A pointer to the allocated memory.
*/
void *malloc_checked(unsigned int m)
{
	void *mem = malloc(m);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
