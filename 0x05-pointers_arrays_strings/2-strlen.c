#include "holberton.h"
/**
* _strlen - returns strlen
* @s: par
* Return: int
*/

int _strlen(char *s)
{
	int i;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}
	c = i;
	return (c);
}
