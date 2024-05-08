#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
* jump_search - Searches for a value in a sorted array of integers
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in array
* @value: Value to search for
*
* Return: The first index where value is located, or -1 if value is not present
*/
int jump_search(int *array, size_t size, int value)
{
size_t i, jump;
if (!array)
return (-1);

/* Calculate the jump interval */
jump = sqrt(size);
for (i = 0; i < size; i += jump)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] >= value)
{
printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
/* Perform linear search in the found range */
for (size_t j = i - jump; j < i; j++)
{
printf("Value checked array[%lu] = [%d]\n", j, array[j]);
if (array[j] == value)
return (j);
}
break;
}
}
return (-1);
}
