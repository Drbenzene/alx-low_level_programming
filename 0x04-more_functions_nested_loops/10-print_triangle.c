#include "holberton.h"
/**
* print_triangle - Print Triangle
* @size - Size of the Triangle
* @_putchar - To print
* @size < 0 - Print new Line
* @# - Print Triangle
* Return - void
*/

void print_triangle(int size);

{
	int i;
	int x;
	int spaces

	for (i = 0; i < size; i++)
	{
		for (spaces = size - 1 - i; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (x = 0; x <= i; x++);
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
