#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - a function that allocates memory
* @a: an int that is the size of the memory we want allocated
*
* Description: exit with a status of 98 if failed
* Return: the pointer to the allocated memory or a exit of 98
*/

void *malloc_checked(unsigned int a)
{
	int *pointer;

	pointer = malloc(a);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
