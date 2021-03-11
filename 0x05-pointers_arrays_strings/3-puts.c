#include "holberton.h"
/**
 * _puts - prints a string followed by a newline
 * @str: string variable
 */

void _puts(char *str)
{
	int i;

	while (*(str + i))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
