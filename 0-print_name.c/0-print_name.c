#include <stdlib.h>
/**
* print_name - prints to name to print
* @f: function to print name
*
* Return: always void
*/

void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
