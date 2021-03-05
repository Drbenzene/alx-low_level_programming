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
	int i;
	int y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
