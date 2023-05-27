#include "shell.h"

/**
 * bfree - free ptr and NULL addres
 * @ptr: addres of ptr to be free
 *
 * Return: 1 if freed, o/w 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
