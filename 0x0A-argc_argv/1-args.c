#include "holberton.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argunment vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argc = argv;
		print("%d\n", argc - 1);
	}
	return (0);
}
