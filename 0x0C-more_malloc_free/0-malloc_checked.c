#include <stdlib.h>
/**
* malloc_checked - performs a malloc, if failed exita
*
* @b: number of bytes to allocate
*
* Return: pointer to begining of new mwmory
*/

void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (ret == null)
		exit(98);
	return (ret);
}