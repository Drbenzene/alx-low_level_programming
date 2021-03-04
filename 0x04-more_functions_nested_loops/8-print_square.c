#include "holberton.h"
/**
* print_square - print a nxn square
*
*@size: length & Width of square
*
*Return: void
*/

void print_square(int size)
{
	int i, n;

	i = 0;
	while (size > 0 && i < size)
	{
		n = 0;
		while (n < size)
		{
			_putchar('#');
			n++;
		}
		_putchar('\n');
		i++
	}
	if (size <= 0)
		_putchar('\n')
}
